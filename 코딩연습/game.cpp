#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void gotoxy(int x, int y)
{
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
}
typedef struct PLAYER
{
    int x;
    int prevX;
    int life;
}ST_PLAYER;
typedef struct ENEMY
{
    int x, y;
    int prevY;
    bool active;
}ST_ENEMY;
char map[50][30];
int score;
ST_PLAYER player;
ST_ENEMY* enemy;
bool gameOver;
void initMap(int mapX, int mapY)
{
    gameOver = false;
    player.x = mapX / 2;
    player.prevX = player.x - 1;
    player.life = 5;
    score = 0;
    for (int y = 0; y < mapY; y++)
    {
        for (int x = 0; x < mapX; x++)
        {
            if (x == 0 || y == mapY-1 || x == mapX - 1)
                map[y][x] = 99;
            else
                map[y][x] = 0;
        }
    }
    map[mapY - 3][player.x] = 1;
}
void createEnemy(int level)
{
    enemy = (ST_ENEMY*)malloc(sizeof(ST_ENEMY) * level);
    for (int i = 0; i < level; i++)
    {
        enemy[i].active = false;
    }
}
void createMap(int mapX, int mapY, int level)
{
    initMap(mapX, mapY);
    createEnemy(level);
}
void renderMap(int mapX, int mapY)
{
    for (int y = 0; y < mapY; y++)
    {
        for (int x = 0; x < mapX; x++)
        {
            gotoxy(x * 2, y);
            if (map[y][x] == 99)
                printf ("□");
            else if (map[y][x] == 0)
                printf ("  ");
            else if (map[y][x] == 1)
                printf ("★");
            else if (map[y][x] == 2)
                printf ("▼");
        }
    }

    gotoxy((mapX + 1) * 2, mapY /2 -1);
    printf ("점수 : %d\t",score);
    gotoxy((mapX + 1) * 2, mapY /2 + 1);
    printf ("생명 : %d\t", player.life);
    gotoxy((mapX + 1) * 2, mapY /2 + 3);
    printf("     Made by");
    gotoxy((mapX + 1) * 2, mapY /2 + 4);
    printf("  Jae Hwan Shin");
    gotoxy((mapX + 1) * 2, mapY /2 + 6);
    printf("  blog//jhjh307");
}
void setPosition(int mapY)
{
    map[mapY - 3][player.prevX] = 0;
    map[mapY - 3][player.x] = 1;
}
int addEnemy(int arrNum,int level, int mapX)
{
    int temp;
    srand( (unsigned)time(NULL) );
    if (arrNum == level)
    {
        arrNum = 0;
    }
    temp = rand()%(mapX / 2) + 1;
    for (int i = 0; i < temp; i++)
    {
        if (enemy[arrNum].active == false)
        {
            enemy[arrNum].active = true;
            enemy[arrNum].x = rand()%(mapX - 2) + 1;
            enemy[arrNum].y = 0;
            for (int i = 1; i <= temp; i++)
            {
                if (enemy[arrNum - i].x == enemy[arrNum].x)
                {
                    enemy[arrNum].y = -1;
                    enemy[arrNum].active = false;
                }
            }
            enemy[arrNum].prevY = enemy[arrNum].x - 1;
            map[enemy[arrNum].y][enemy[arrNum].x] = 2;
            arrNum++;
        }
    }
    return arrNum;
}
void moveEnemy(int level, int mapY)
{
    for (int i = 0; i < level; i++)
    {
        if (enemy[i].active == true)
        {
            if (enemy[i].y == mapY - 2)
            {
                map[enemy[i].y][enemy[i].x] = 0;
                enemy[i].active = false;
                score += 50;
                continue;
            }
            enemy[i].prevY = enemy[i].y;
            enemy[i].y++;
            map[enemy[i].prevY][enemy[i].x] = 0;
            map[enemy[i].y][enemy[i].x] = 2;
        }
    }
}
void collisionCheck(int level, int mapY)
{
    for (int i = 0; i < level; i++)
    {
        if (player.x == enemy[i].x && mapY - 3 == enemy[i].y)
        {
            player.life --;
            map[enemy[i].y][enemy[i].x] = 1;
            enemy[i].y = -1;
            enemy[i].active = false;
        }
    }
}
void input(int mapX, int mapY)
{
    if (GetKeyState(VK_LEFT) & 0x8000)     {
        if (player.x - 1 != 0)    {
            player.prevX = player.x;
            player.x -= 1;
            setPosition(mapY);
        }
    }
    else if (GetKeyState(VK_RIGHT) & 0x8000)     {
        if (player.x + 1 != mapX - 1)    {
            player.prevX = player.x;
            player.x += 1;
            setPosition(mapY);
        }
    }
}
void gameOverCheck(int mapX, int mapY)
{
    if (player.life <= 0)
    {
        system("cls");
        gotoxy(0, mapY / 2);
        printf ("게임 오버\n점수는 : %d\n",score);
        gameOver = true;
        return;
    }
}
int main(void)
{
    int x, y;
    int arrNum = 0;
    int level = 0;
    printf (" 맵 크기를 입력하시오(x , y) : ");
    scanf ("%d %d", &x, &y);
    printf (" 적 수를 입력하시오 : ");
    scanf ("%d", &level);
    createMap(x, y, level);
    renderMap(x, y);
    system("cls");
    while(!gameOver)
    {
        input(x,y);
        arrNum = addEnemy(arrNum, level, x);
        moveEnemy(level, y);
        collisionCheck(level, y);
        renderMap(x, y);
        gameOverCheck(x, y);
        Sleep(130);
    }
    free(enemy);
}
//x좌표 30, y좌표 20, 적 수 2000이 적당함


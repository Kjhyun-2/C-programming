#include <cstdio>
#include <stdlib.h> //랜덤함수 필요! 
#include <time.h> //시간 조정! 
#include "colortext.h" //색을 입히는 헤더파일! 
int main()
{
	int mysu;
	int comsu;
	int jumsu=100;
	color_init();
	srand((int)time(NULL));
	comsu = rand()%1000+1; //1~1000까지 랜덤의 숫자!!
	printColoredText("UP DOWN GAME!!!\n",CYAN);
	printf("\n");
	printColoredText("						1부터1000까지의 수를 입력받아 숫자를 맞추세요!\n",PURPLE); 
	do{
		scanf("%d",&mysu);	
		if(mysu > comsu) //내수가 컴퓨터 수보다 클 
		{
			printColoredText("DOWN!!!\n",GREEN);
			jumsu--;
		}
		else if(mysu < comsu) // 내수가 컴퓨터 수보다 작을때  
		{
			printColoredText("UP!!!\n",YELLOW);
			jumsu--;
		}
		else //내 수가 컴퓨터 수랑 같을때 
		{
			printColoredText("정답!!!\n",RED);
			printf("당신의 점수는 %d입니다!\n",jumsu); 
			break;
		}
	}while(1);
	return 0;
}

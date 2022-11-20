#include <cstdio>
int c[500][500]={0,};
int b[500][500]={0,};
int a;
int check[500]={0,};
int check2[500]={0,};
int check3[500]={0,};
void su(int);
int main()
{
	freopen("input.txt","r",stdin);
	int i,j;	
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	su(0);
	return 0;
}
void su(int x)
{
	int i,j;
	if(x==a)
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		printf("==========================\n");
		return;
	}
	for(i=0;i<a;i++)
	{
		if(check2[x+i-a]==0 && check[i]==0 && check3[x)
		{
			check[i]=1;
			check2[x+i-a] = 1;
			c[x][i] = 1;
			su(x+1);
			check[i]=0;
			c[x][i] = 0;
			check2[x+i-a] = 0;
		}
	}
}
			
	
	

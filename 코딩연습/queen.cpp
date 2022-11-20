#include <cstdio>
int a,b[500][500];
int check[500];
int check2[500];
int check3[500];
int n=0;
void su(int);
int main()
{
	scanf("%d",&a);
	su(0);
//	printf("%d",n);
	return 0;
}
void su(int x)
{
	int i,j;
	if(x==a)
	{
		n++;
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
		printf("================\n");
		return;
	}
	for(i=0;i<a;i++)
	{
		if(check[i]==0 && check2[x+i]==0 && check3[x-i+a]==0)
		{	
			check[i]=1;
			check2[x+i]=1;
			check3[x-i+a]=1;
			b[x][i]=1;
			su(x+1);
			b[x][i]=0;
			check2[x+i]=0;
			check[i]=0;
			check3[x-i+a]=0;
		}
	}
}

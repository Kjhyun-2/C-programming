#include <cstdio>
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int a,i,j;
	int b[50][50]={0};
	int q=1;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=i;j<a;j++)
		{
//			printf("(%d)(%d) ",i,j);
			b[i][j]=q++;
		}
//		printf("\n");
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(b[i][j]==0)
			{
				printf("  ");
			}
			else
			{
				printf("%d ",b[i][j]);
			}		
		}
		printf("\n");
	}
	
	return 0;
}
	

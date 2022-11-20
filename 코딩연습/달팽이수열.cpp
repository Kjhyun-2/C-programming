#include <cstdio>
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int a,i,j,q=1; 
	int b[50][50]={0};
	int x=0,y=-1;
	scanf("%d",&a);
	do{	
		for(i=0;i<a;i++)
		{
			y++;
			b[x][y]=q++;
		}
		
		for(i=0;i<a;i++)
		{
			x++;
			b[x][y]=q++;
		}
						
		for(i=0;i<a;i++)
		{
			y--;
			b[x][y]=q++;
		}if(q>a)
		{
			break;
		}
		
		for(i=0;i<a;i++)
		{
			x--;
			b[x][y]=q++;
		}
		if(q>a)
		{
			break;
		}			
	}while(1);
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
		

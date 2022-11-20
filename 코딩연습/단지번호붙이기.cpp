#include <cstdio>
int main()
{
	freopen("input.txt","r",stdin);
	int a,i,j,n=0,n2=0;
	int b[50][50];
	int queue1[50];
	int queue2[50];
	int queue3[50];
	int x=0,y=0,z=0;
	int tail=0,head=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%1d",&b[i][j]);
		}
	}
	queue1[tail]=0;
	queue2[tail]=0;
	queue3[tail]=z;
	tail++;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			do{
				x=queue1[head];
				y=queue2[head];
				z=queue3[head];
				head++;
				
				if(head>tail)
				{
					n2++;
					break;
				}
				if(b[i][j]==1)
				{
					if(x+1<a && b[x+1][y]==1)
					{
						b[x+1][y]=0;
						queue1[tail]=x+1;
						queue2[tail]=y;
						queue3[tail]=z+1;
						tail++;
						n++;
					}
					if(x-1>=0 && b[x-1][y]==1)
					{
						b[x-1][y]=0;
						queue1[tail]=x-1;
						queue2[tail]=y;
						queue3[tail]=z+1;
						tail++;
						n++;
					}
					if(y-1>=0 && b[x][y-1]==1)
					{
						b[x][y-1]=0;
						queue1[tail]=x;
						queue2[tail]=y-1;
						queue3[tail]=z+1;
						tail++;
						n++;
					}
					if(y+1<a && b[x][y+1]==1)
					{
						b[x][y+1]=0;
						queue1[tail]=x;
						queue2[tail]=y+1;
						queue3[tail]=z+1;
						tail++;
						n++;
					}
				}
			}while(1);
			printf("%d ",n);
		}
	}
	printf("%d",n2);
	
	
	return 0;
}
						
					

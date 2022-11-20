#include <cstdio>
int a,sv[2500];
int b[2500][2500];
int stack1[2500];
int stack2[2500];
int main()
{
	freopen("input.txt","r",stdin);
	int i,j,top=0,k,t=0;
	int n=0,n2=0; 
	int x=0,y=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%1d",&b[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(b[i][j]==1)
			{
				top=0;
				stack1[top]=i;
				stack2[top]=j;
				top++;
				n=0;
				do{
					x=stack1[top-1];
					y=stack2[top-1];
					top--;
					if(top<0)
					{
						n2++;
						break;
					}
					if(x+1<a && b[x+1][y]==1)
					{
						b[x+1][y]=0;
						stack1[top]=x+1;
						stack2[top]=y;
						top++;
						n++;
					}
					if(x-1>=0 && b[x-1][y]==1)
					{
						b[x-1][y]=0;
						stack1[top]=x-1;
						stack2[top]=y;
						top++;
						n++;
					}
					if(y+1<a && b[x][y+1]==1)
					{
						b[x][y+1]=0;
						stack1[top]=x;
						stack2[top]=y+1;
						top++;
						n++;
					}
					if(y-1>=0 && b[x][y-1]==1)
					{
						b[x][y-1]=0;
						stack1[top]=x;
						stack2[top]=y-1;
						top++;
						n++;
					}
				}while(1);
				sv[t]=n;
				t++;
			}
		}
	}
	printf("%d\n",n2);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t-1-i;j++)
		{
			if(sv[j+1]<sv[j])
			{
				k=sv[j+1];
				sv[j+1]=sv[j];
				sv[j]=k;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",sv[i]);
	}
	return 0;
}
					
			

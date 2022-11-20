#include <cstdio>
int a;
int b[300]={0,};
void input();
void process();
void output();
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	input();
	process();
	output();
	return 0;
}
void input()
{
	int i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	
}
void process()
{
	int i,j,k;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a-1-i;j++)
		{
			if(b[j+1]<b[j])
			{
				k=b[j+1];
				b[j+1]=b[j];
				b[j]=k;
			}
		}
	}
}
void output()
{
	int i,j; 
	for(i=0;i<a;i++)
	{
		printf("%d\n",b[i]);
	}
}
				

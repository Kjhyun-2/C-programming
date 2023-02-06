#include <cstdio>
int main()
{
	unsigned long long int a,b,i,j;	
	int n=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				n++;
			}
			if(n>2)
			{
				break;
			}
		}
	
		if(n==2)
		{
			printf("%d\n",i);
		}
		n=0;
	}
	
	return 0;
}

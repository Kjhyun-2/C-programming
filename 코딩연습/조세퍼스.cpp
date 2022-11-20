#include <cstdio>
int main()
{
	int a,b,i,j,n=0;
	int sw=0;
	int c[500]={0,};
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++)
	{
		c[i]=1;
	}
	printf("<"); 
	do{
		for(i=1;i<=a;i++)
		{
			if(sw==a)
			{
				printf(">");
				return 0;
			}
			if(i==a+1)
			{
				i=1;
			}	
			if(c[i]==1)
			{
				n++;	
			}
			if(n==b)
			{
				printf("%d",i);
				c[i]=0;
				sw++;
				if(sw<a)
				{
					printf(", ");
				}
				n=0;
			}
		}
	}while(1);
	
	return 0;
}
			
		
	

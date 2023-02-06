#include <stdio.h>
int check[1500]={0,};
int main()
{
	int a,i,j,n=0;
	int k = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a);
		k = a%42;
		if(check[k]==0)
		{
			n++;
			check[k] = 1;
		}
	}
	printf("%d",n);
	return 0;
}
	

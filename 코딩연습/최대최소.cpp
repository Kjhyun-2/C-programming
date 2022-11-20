#include <stdio.h>
int main()
{
	int a[5];
	int x,y,b,i;

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}	
	x=y=b=a[0];
	for(i=1;i<5;i++)
	{
		b+=a[i];
	
	if(x<a[i])
	
		x=a[i];
	
	if(y>a[i])
	
		y=a[i];
	}
	printf("최대 %d",x);	
	printf("최소 %d",y);
	printf("총합=%d",b);
	return 0;
}		

#include <cstdio>
int main()
{
	int a[50];
	int b,i;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]+a[b-1]);
	return 0;
}

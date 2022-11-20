#include <cstdio>
int main()
{
	int a,b,c;
	int as,bs,cs;
	int n=1;
	scanf("%d %d %d",&a,&b,&c);
	as=1;
	bs=1;
	cs=1;
	do{
		n++;
		as++;
		bs++;
		cs++;
		if(as==16)
		{
			as=1;
		}
		if(bs==29)
		{
			bs=1;
		}
		if(cs==20)
		{
			cs=1;
		}
		
		if(as==a && bs==b && cs==c)
		{
			break;
		}
	}while(1);
	if(as==1 && bs==1 && cs==1)
	{
		n=1;
	}
	printf("%d ",n);
	return 0;
}
		
		

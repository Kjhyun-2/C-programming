#include <cstdio>
#include <string.h>
int main()
{
	int i,k,n=0;
	char a[200];
	gets(a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]=='%')
		{
			n++;
		}	
		if(n==1)
		{
			if(a[i]!='%')
			{ 
				printf("%c",a[i]);
			}
		}
	}
	return 0;
}

#include <cstdio>
int main()
{
	long long int a,b;
	long long int k,t;
	int i;
	scanf("%lld %lld",&a,&b);
	if(a>=b)
	{
        do{
			a=a%b;
			k=a;
			a=b;
			b=k;
			if(b==0)
			{
				t = a;
				break;
			}
		}while(1);
    }
	else
	{
        do{
		    b=b%a;
	    	k=b;
	    	b=a;
	    	a=k;
		    if(a==0)
		    {
		    	t = b;
			    break;
		    }
		}while(1);
	}
	for(i=0;i<t;i++)
	{
		printf("1");
	}
	
	return 0;
}
			

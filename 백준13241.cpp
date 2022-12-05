#include <cstdio>
int main()
{
	long long int a,b,ax,bx;
	long long int k,t,p;
	scanf("%d %d",&a,&b);
    ax=a;
    bx=b;
	if(a>=b)
	{
  		do{
			a=a%b;
			k=a;
			a=b;
			b=k;
			if(b==0)
			{
				t=a;
				printf("%lld",(ax*bx)/t);
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
		    	p=b;
			 	printf("%lld",(ax*bx)/p);
			   	break;
		    }
		
		}while(1);
	}
	return 0;
}
				
	
			
		

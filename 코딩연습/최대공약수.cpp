#include <cstdio>
int main()
{
	int a[1000]={0,},b[1000]={0,},c,i,j;
	int k,t,p,ax[1000]={0,},bx[1000]={0,};
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		ax[i]=a[i];
		bx[i]=b[i];
	}

	for(i=0;i<c;i++)
	{
		if(a[i]>=b[i])
		{
        	do{
				a[i]=a[i]%b[i];
				k=a[i];
				a[i]=b[i];
				b[i]=k;
				if(b[i]==0)
				{
					t=a[i];
					printf("%d\n",(ax[i]*bx[i])/t);
					break;
				}
				t=0;
				
			}while(1);
    	}
		else
		{
        	do{
		    	b[i]=b[i]%a[i];
	    		k=b[i];
	    		b[i]=a[i];
	    		a[i]=k;
		    	if(a[i]==0)
		    	{
			    	p=b[i];
			    	printf("%d\n",(ax[i]*bx[i])/p);
			    	break;
		    	}
		    	p=0;
			}while(1);
		}
	
	}
	return 0;
}
				
	
			
		

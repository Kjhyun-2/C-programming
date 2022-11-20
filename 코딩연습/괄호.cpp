#include <cstdio>
#include <string.h>
int main()
{	freopen("input.txt","r",stdin);
	int i,j,k,h,hap=0;
	int hap2=0;
	int b[500]={0,};
	int c[500]={0,};
	int stack1[500]={0,};
	int stack2[500]={0,};
	int top=0,n=1,n2=-1;
	char a[5000]={0,};
	scanf("%s",a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]=='(')
		{
			stack1[top]=n;
			b[i]=n;
			top++;
			n++;
		}
		else if(a[i]==')')
		{
			b[i]=stack1[top-1];
			stack1[top]=0;
			top--;
			n++;
		}

		if(a[i]=='[')
		{
			stack2[top]=n2;
			b[i]=n2;
			top++;
			n2--;
		}
		else if(a[i]==']')
		{
			b[i]=stack2[top-1];
			stack2[top]=0;
			top--;
			n2--;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
		if(b[i]==b[i+1] && b[i]>0)
		{
			c[i]=2;
		}
		else if(b[i]==b[i+1] && b[i]<0)
		{
			c[i]=3;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+2;j<k;j++)
		{
			if(b[i]==b[j] && b[i]>0)
			{
				for(h=i+1;h<j;h++)
				{
					hap=hap+c[h];
				}
				printf("--%d--",hap*2);
				hap=0;
			}
			else if(b[i]==b[j] && b[i]<0)
			{
				for(h=i+1;h<j;h++)
				{
					hap2=hap2+c[j];
				}
				printf("===%d=== ",hap2*3);
				hap2=0;
			}
		}
	}

	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	
	
	return 0;
}
		
			
			
	

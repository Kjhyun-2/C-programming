#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <stack>
char b[3500];
int main()
{
	int a,i,j;
	int t=0;
	scanf("%d\n",&a);
	for(i=0;i<a;i++)
	{
		fgets(b, sizeof(b), stdin);
		t = strlen(b);
		std::stack<char> st;
		for(j=0;j<t;j++)
		{
			if(b[j]!=' ' && b[j]!='\n')
			{
				st.push(b[j]);
			}
			else
			{
				for(; ;)
				{
					printf("%c",st.top());
					st.pop();
					
					if(st.empty())
					{
						break;
					}
				}
				printf(" ");
			}	
		}
		printf("\n");
		
	}
	return 0;
}

#include <iostream>
using namespace std;
int b[500]={0,};
int dy[500]={0,};
int main()
{
	freopen("input.txt","r",stdin);
	int a,i,j;	
	int max=0,max2=0;
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> b[i];
	}
	dy[0] = 1;
	for(i=1;i<a;i++)
	{
		for(j=0;j<i;j++)
		{
			if(b[i] >= b[j] && max < dy[j])
			{
				max = dy[j];
			}
		}
		dy[i] = max + 1;
		max=0;
	}
	for(i=0;i<a;i++)
	{
		if(max2 < dy[i])
		{
			max2 = dy[i];
		}
	}
	cout << a-max2;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	int i,j;
	int x=0;
	int max=0;
	int a[50]={0,};
	int b[50]={0,};
	for(i=0;i<4;i++)
	{
		cin >> a[i];
		cin >> b[i];
	}
	for(i=0;i<4;i++)
	{
		x = x - a[i] + b[i];
		if(max < x)
		{
			max = x;
		}
	}
	cout << max;

	return 0;
}
	

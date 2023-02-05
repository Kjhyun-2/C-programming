#include <iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	int min = 0;
	int max = 2100000000;
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> b;
		if(min < b)
		{
			min = b;
		}
		if(max > b)
		{
			max = b;
		}		
	}
	cout << min*max;
	return 0;
}
	

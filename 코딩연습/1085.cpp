#include <iostream>
using namespace std;
int main()
{
	int x,y,w,h;
	int min = 2100000000;
	cin >> x >> y >> w >> h;
	if(x<y)
	{
		min = x;
	}
	else
	{
		min = y;
	}
	if(min > w - x)
	{
		min = w-x;
	}
	if(min > h - y)
	{
		min = h-y;
	}
	cout << min;

	return 0;
}

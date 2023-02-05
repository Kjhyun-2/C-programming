#include <iostream>
using namespace std;
int main()
{
	int a,i,j;
	int n=0;
	int x,y,z,t=0;
	cin >> a;
	for(i=1;i<=a;i++)
	{
		if(i<=99)
		{
			n++;
		}
		else
		{
			x = i/100;
			t = i%100;
			y = t/10;
			z = t%10;
			
			if(y-x==z-y)
			{
				n++;
			}
		}
	}
	cout << n;
	return 0;
}
			
		

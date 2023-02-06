#include <iostream>
using namespace std;
unsigned long long int dap=0;
int main()
{
	int a,i;
	cin >> a;
	for(i=1;i<a;i++)
	{
		dap += (i*a) + i;
	}
	cout << dap;
	return 0;
}

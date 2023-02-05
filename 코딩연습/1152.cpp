#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int b,i,n=0;
	string a;
	getline(cin,a);
	b = a.length();
	for(i=0;i<b;i++)
	{ 
		if(a[i] == ' ')
		{
			n++;
		}
	}
	if(a[0]==' ')
	{
		n--;
	}
	if(a[b-1]==' ')
	{
		n--;
	}
	cout << n+1;
	return 0;
}

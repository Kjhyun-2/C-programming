#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int a,b,c;
	int i,j,k;
	string s;
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> b >> s;
		c = s.size();
		for(j=0;j<c;j++)
		{
			for(k=0;k<b;k++)
			{
				cout << s[j];
			}
		}
		cout << "\n";
	}
	return 0;
}
			

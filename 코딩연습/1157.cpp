#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int b,i,max=0;
	int t=0,p=0;
	int c[27]={0,};
	string a;
	cin >> a;
	b = a.length();
	for(i=0;i<b;i++)
	{
		if(a[i] >=97)
		{
			c[int(a[i])-97]++;
		}
		else
		{
			c[int(a[i])-65]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(max < c[i])
		{
			max = c[i];
		}
	}
	for(i=0;i<26;i++)
	{
		if(max == c[i])
		{
			p = i;
			t++;
		}
	}
	if(t==1)
	{
		cout << char(p+65);
	}
	else
	{
		cout << "?";
	}
	return 0;
}
		

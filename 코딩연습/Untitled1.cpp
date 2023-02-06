#include <iostream>
using namespace std;
int main()
{
	int c[10] = {0,};
	int i,check=0,t=1;
	int check2=0;
	for(i=1;i<=8;i++)
	{
		cin >> c[i];
		if(i==c[i])
		{
			check++;
		}
	}
	for(i=8;i>=1;i--)
	{
		if(i==c[t])
		{
			check2++;
		}
		t++;
	}
	if(check==8)
	{
		cout << "ascending";
	}
	else if(check2==8)
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
	return 0;
}
	
	

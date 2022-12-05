#include <iostream>
using namespace std;
int main()
{
	int a,b,i,j,hap=0;
	int x,n=0;
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	char *t[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cin >> a >> b;
	for(i=0;i<a-1;i++)
	{
		hap=hap+month[i];
	}
	x=(hap+b)%7;
	if(x==0)
	{
		cout << t[6];
	}
	else
	{
		cout << t[x-1];
	}
	
	
	return 0;
}

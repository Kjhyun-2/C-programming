#include <iostream>
#include <algorithm>
using namespace std;
int cmp(int x,int y)
{
	if(x < y)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i,j;
	int hap=0;
	int b[50]={0,};
	for(i=0;i<5;i++)
	{
		cin >> b[i];
		hap = hap + b[i];
	}
	std::sort(b,b+5,cmp);
	cout << hap/5 << "\n";
	cout << b[2];
	return 0;
}
	

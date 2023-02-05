#include <iostream>
using namespace std;
int main()
{
	int a,i,j;
	int b[1200]={0,};
	int max=0;
	float hap=0.0;
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> b[i];
		if(max < b[i])
		{
			max = b[i];
		}
	}
	for(i=0;i<a;i++)
	{
		hap += ((float)b[i]/max)*100;	
	}
	cout << hap/a;
	return 0;
}
	

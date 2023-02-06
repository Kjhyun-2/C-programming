#include <iostream>
using namespace std;
int main()
{
	int a,i,j;
	int b,hap=0;
	int n=0;
	float av = 0;
	float dap = 0;
	int c[1500]={0,};
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> b;
		for(j=0;j<b;j++)
		{
			cin >> c[j];
			hap = hap + c[j];
		}
		av = (float)hap/b;
		for(j=0;j<b;j++)
		{
			if(av<c[j])
			{
				n++;
			}
		}
		dap = (100/(float)b)*n;
		printf("%.3f",dap);
		cout << "%\n";
		dap = 0;
		hap = 0;
		n=0;
		av = 0;
	}
	return 0;
}
		

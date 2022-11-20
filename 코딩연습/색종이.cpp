#include <iostream>
using namespace std;
int main()
{
	int a,i,j,h;
	int x,y,n=0;
	int sv[500][500]={0,};
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> x >> y;
		for(j=x;j<x+10;j++)
		{
			for(h=y;h<y+10;h++)
			{
				if(sv[j][h]==0)
				{
					sv[j][h] = 1;
					n++;
				}
			}
		}
	}
	cout << n;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	int as[3] = {0,};
	int bs[3] = {0,};
	cin >> a >> b;
	
	as[0] = a/100;
	as[1] = (a%100)/10;
	as[2] = (a%100)%10;
	
	bs[0] = b/100;
	bs[1] = (b%100)/10;
	bs[2] = (b%100)%10;
	for(i=2;i>=0;i--)
	{
		if(as[i]>bs[i])
		{
			cout << as[2] << as[1] << as[0];
			break;
		}
		else if(as[i]<bs[i])
		{
			cout << bs[2] << bs[1] << bs[0];
			break;
		}
	}
	return 0;
}

			
	

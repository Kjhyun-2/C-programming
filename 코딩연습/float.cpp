#include <cstdio>
int celtofah(float c)
{
	return 1.8*c+32;
}
int fahtocel(float f)
{
	return 0.5555*f-17.7777;
}
int main()
{
	printf("%d  %d\n",celtofah(20),fahtocel(100));
	return 0;
}

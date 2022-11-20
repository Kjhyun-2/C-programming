#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("x = %d .\n",x);
	x += 57;
	printf("x = %d .\n",x);
	x += 14621;
	printf("x = %d .\n",x);
	x -= 10000;
	printf("x = %d .\n",x);
	x -= 4600;
	printf("x = %d .\n",x);
	x -= 78;
	printf("x = %d .\n",x);
	x *= 7;
	printf("x = %d .\n",x);
	x /= 100;
	printf("x = %d .\n",x);
	x %= 5;
	printf("x = %d .\n",x);
	x *=200;	x +=50; x *=2; x *=2;
	printf("x = %d .\n",x);
	return 0;
}

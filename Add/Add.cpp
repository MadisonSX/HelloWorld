#include <cstdio>
#include <_Time.h>

//array, สýื้
int a[10000000];
int b[10000000];
int c[10000000];

int main()
{
	int x(1), y(1), z;

	z = x + y;
	a[0] = x;
	b[0] = y;
	for (int i(1); i < 10000000; i++)
	{
		x = y; y = z; z = x + y;
		a[i] = x; b[i] = y;
	}
	Timer timer;
	timer.begin();
	for (int i(0); i < 10000000; i++)
	{
		c[i] = a[i] + b[i];
	}
	timer.end();
	timer.print();

}
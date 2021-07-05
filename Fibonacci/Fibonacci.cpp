#include<stdio.h>//std: standard, io: in/out

int main()
{
	//to do: calculate Fibonacci numbers
	unsigned long long a(1), b(1), c;//64 bit
	unsigned long long limit(1E15);
	c = a + b;
	while (c < limit)
	{
		printf("%llu\n", c);
		a = b;
		b = c;
		c = a + b;
	}
	//K: 10^3, M: 10^6, G: 10^9, T: 10^12
}


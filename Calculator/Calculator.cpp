//.cpp: C plus plus, C++
#include <stdio.h>

int main()
{
	//todo: get input
	double a, b, c;
	//real, ����������С�����㣨�ģ���
	// 0.011111111 -2
	// float: 8 expr, 1 sign, 23 β��, 32 bits, 1 byte = 8 bits
	// double: 11, 1, 52
	char p;//character, + - * /

	while (1)
	{

		int n = scanf("%lf%c%lf", &a, &p, &b);// address of a, b, p
		if (n != 3)break;
		switch (p)
		{
		case '+'://character: '', string: ""
			c = a + b;
			printf("%6e\n", c);
			break;
		case '-':
			c = a - b;
			printf("%6e\n", c);
			break;
		case '*':
			c = a * b;
			printf("%6e\n", c);
			break;
		case '/':
			c = a / b;
			printf("%6e\n", c);
			break;
		default:
			printf("���Ǵ�ɵ��\n");
		}
	}

}
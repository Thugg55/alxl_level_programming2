#include <stdio.h>

/**
 * main - computes the even terms in the fibonacci series.
 *
 * Return: Always 0
 */

int main(void)
{
	long n1, n2, a, b;

	n1 = 1;
	n2 = 2;
	a = b = 0;
	while (a <= 4000000)
	{
		a = n1 + n2;
		n1 = n2;
		n2 = a;
		if ((n1 % 2) == 0)
			b += n1;
	}
	printf("%ld\n", b);
	return (0);
}
		

#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int f;
	long a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (f = 0; f < 48; f++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

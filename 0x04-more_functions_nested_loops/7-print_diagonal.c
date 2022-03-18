#include "main.h"

/**
 * print_diagonal - a function that prints diagonal in the terminal
 * @n: input value check
 * Return: nothing.
 */

void print_diagonal(int_n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (i <= j)
		{
			if (j <- i)
				_putchar(' ');
			else
				_putchar(92);
			j += 1;
		}
		_putchar('\n');
		i += 1;
		j = 0;
	}
	if (n <= 0)
		_putchar('\n');
}

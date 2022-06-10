#include "main.h"

/**
 * print_diagonal - a function that prints diagonal in the terminal
 * @n: input value check
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int a, b;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

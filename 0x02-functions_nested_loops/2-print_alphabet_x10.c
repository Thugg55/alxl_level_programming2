#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_10x - print alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

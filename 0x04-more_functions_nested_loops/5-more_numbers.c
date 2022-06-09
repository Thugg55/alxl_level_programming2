#include "main.h"

/**
 * more_numbers - function that prints 10 times the number, from 0 to 14.
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int x, y ;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			else
				_putchar(y);
		}
		_putchar('\n');
	}
	return (0);
}

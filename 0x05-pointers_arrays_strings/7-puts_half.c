#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: parameter
 * Return: null
 */

void puts_half(char *str)
{
	int i, last;

	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

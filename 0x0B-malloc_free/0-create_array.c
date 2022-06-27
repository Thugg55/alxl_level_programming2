#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: allocated character
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);
	b = malloc(sizeof(c) * size);
	if (b == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		b[i] = b;
	}
	return (b);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count arrray
 * @s: array of elements
 * Return: i
 */

int _strlen(char *s)
{
	unsigned int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int str;

	if (str == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}


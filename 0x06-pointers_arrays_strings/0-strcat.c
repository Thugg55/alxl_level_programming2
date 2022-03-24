#include "main.h"

/**
 * _strcat - concatenates tw0 strings
 * @dest: A pointer to a char that will be updated
 * @str: A pointer to a char that will be updated
 * Return: dest
 */

chat *_strcat(char *dest, char *str)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /*WHILE count character */
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0') /*WHILE concatenate dest with src*/
	{
		dest[i] = src[j];
		j++; /*sum j*/
		i++; /*sum i*/
	}

	dest[i] = '\0'; /*the terminating null byte*/

	return (dest);
}

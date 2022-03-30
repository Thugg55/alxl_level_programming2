#include "main.h"

/**
 * set_string - set the value of a pointer ro a char
 * @s: pointer to pointer value should be set to
 * @to: string to set
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}

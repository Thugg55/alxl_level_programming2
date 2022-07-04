#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled
 * Return: 0 Always (success)
 */

int main (void)
{
	printf("%s\n", __file__);
	return (0);
}

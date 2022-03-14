#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all the numbers of base 16 in lowercase
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num = 0;
	int hex = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	while (hex < 6)
	{
		putchar(98 + hex);
		hex++;
	}
	putchar('\n');
	return (0);
}

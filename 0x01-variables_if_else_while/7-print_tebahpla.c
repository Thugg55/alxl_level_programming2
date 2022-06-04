#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 122;

	while (low >= 97)
	{
		putchar(low);
		low--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Description: Write a program that prints base ten digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n = n + 1;
	};
	return (0);
}

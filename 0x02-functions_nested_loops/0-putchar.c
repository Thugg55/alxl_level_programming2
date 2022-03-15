#include "main.h"
/**
 * main - Entry point
 * Return: prints _putchar, followed by a new line
 */
int main(void)
{
	int arr[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int arrsize = sizeof(arr) / sizeof(int);

	int i;

	for (i = 0; i < arrsize; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}

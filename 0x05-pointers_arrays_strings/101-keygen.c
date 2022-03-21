#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);

	return (0);
}

#include "main.h"

/**
 * power_operation - returns the natural square root of a number
 * @n: input
 * @c: iterator
 * Return: square root
 */

int power_operation(int c, int n)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (power_operation(n, 2));
}

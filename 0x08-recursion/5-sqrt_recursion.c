#include "main.h"

int _sqrt_helper_recursion(int n, int i);

/**
 * _sqrt_helper_recursion - Returns the square root of n.
 *
 * @n: The number to find the square root of.
 * @i: iterator.
 *
 * Return: If the square root is found, return it, otherwise return -1.
 */
int _sqrt_helper_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper_recursion(n, i + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the square root of.
 *
 * Return: If the square root is found, return it, otherwise return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper_recursion(n, 0));
}

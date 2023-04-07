#include "main.h"

/**
 * _sqrt_helper_recursion - Returns the square root of n within
 * the range [start, end].
 *
 * @n: The number to find the square root of.
 * @start: The lower bound of the range.
 * @end: The upper bound of the range.
 *
 * Return: If the square root is found, return it, otherwise return -1.
 */
int _sqrt_helper_recursion(int n, int start, int end)
{
	int mid;

	if (end < start)
		return (-1);

	mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (_sqrt_helper_recursion(n, start, mid - 1));
	else
		return (_sqrt_helper_recursion(n, mid + 1, end));
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

	return (_sqrt_helper_recursion(n, 0, n));
}

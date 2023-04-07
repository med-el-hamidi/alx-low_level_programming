#include "main.h";
int is_prime_num_helper(int n, int i);

/**
 * is_prime_num_helper - Helper function to check if a number is prime.
 *
 * @n: The number to check if it is prime.
 * @i: The iterator to check if it is a factor of n.
 *
 * Return: If n is prime, return 1. Otherwise, return 0.
 */
int is_prime_num_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime_num_helper(n, i - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 *
 * @n: The number to check.
 *
 * Return: If n is prime, return 1. Otherwise, return 0.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	i = n / 2;

	return (is_prime_num_helper(n, i));
}

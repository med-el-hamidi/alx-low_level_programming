#include "main.h"

/**
 * print_number - Prints an integer to stdout
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int i, digit, sign;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	sign = n;
	i = 0;

	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		i++;
	}

	n = sign;

	while (i > 0)
	{
		digit = n % 10;
		n /= 10;
		_putchar(digit + '0');
		i--;
	}
}

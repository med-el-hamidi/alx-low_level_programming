#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted
 *
 * Return: the int converted from the string.
 */

int _atoi(char *s)
{
	int i, sign, n, len, res, digit;

	i = 0;
	sign = 0;
	n = 0;
	len = 0;
	res = 0;
	digit = 0;

	while (*(s + len) != '\0')
		len++;

	while (i < len && res == 0)
	{
		if (*(s + i) == '-')
			++sign;

		if (*(s + i)  >= '0' && *(s + i) <= '9')
		{
			digit = *(s + i) - '0';
			if (sign % 2)
				digit = -digit;

			n = n * 10 + digit;
			f = 1;
			if (*(s + (i + 1)) < '0' || *(s + (i + 1)) > '9')
				break;
			res = 0;
		}
		i++;
	}

	if (res == 0)
		return (0);

	return (n);
}

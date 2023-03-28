#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;

	/* Convert digits to integer*/
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		/*Check for overflow*/
		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}

		result = result * 10 + digit;
		s++;
	}

	return (sign * result);
}

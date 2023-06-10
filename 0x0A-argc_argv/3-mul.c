#include <stdio.h>
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
			res = 1;
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

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 (EXIT_SUCCESS), 1 (Error).
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

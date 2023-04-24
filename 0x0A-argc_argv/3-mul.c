#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert.
 *
 * Return: the int value of the string, or 0 if the string cannot be converted.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			return (0);
		}

		s++;
	}

	return (result * sign);
}

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments.
 * @argv: an array of strings containing the arguments.
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3 || (_atoi(argv[1]) == 0) || (_atoi(argv[2]) == 0))
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

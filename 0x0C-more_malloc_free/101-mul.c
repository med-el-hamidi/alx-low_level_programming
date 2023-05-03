#include "main.h"

/**
 * _error - Prints an error message and exits with status 98.
 */
void _error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * is_digits - Validates if a string contains only digits.
 * @number: The input string.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digits(char *number)
{
	while (*number)
	{
		if (*number < '0' || *number > '9')
			return (0);
		number++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: 0 on (EXIT_SUCCESS).
 */
int multiply(char *num1, char *num2)
{
	int i, j, len1, len2, len_res, carry, product;
	int *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len_res = len1 + len2;

	result = malloc(len_res * sizeof(int));
	if (result == NULL)
		_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i] += carry;
	}

	for (i = 0; i < len_res; i++)
		printf("%d", result[i]);

	printf("\n");
	free(result);

	return (0);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on (EXIT_SUCCESS), 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		_error();

	if (argc != 3 || !is_digits(argv[1]) || !is_digits(argv[2]))
		_error();

	multiply(argv[1], argv[2]);

	return (0);
}

#include "main.h"

/**
 * reverse_string - reverse a string
 * @str: the string to reverse
 */
void reverse_string(char *str)
{
	if (!str)
		return;

	int len = 0;

	while (*(str + len) != '\0')
		len++;

	for (int i = 0; i < len / 2; i++)
	{
		char tmp = *(str + i);
		*(str + i) = *(str + len - i - 1);
		*(str + len - i - 1) = tmp;
	}
}

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: the first number as a string
 * @n2: the second number as a string
 * @r: a buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result or NULL if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	if (!n1 || !n2 || !r || size_r < 2)
		return (NULL);

	int len1 = 0, len2 = 0, lenr = 0, carry = 0;

	while (*(n1 + len1) != '\0')
		len1++;

	while (*(n2 + len2) != '\0')
		len2++;


	while (len1 > 0 || len2 > 0 || carry)
	{
		int digit1 = len1 > 0 ? *(n1 + --len1) - '0' : 0;
		int digit2 = len2 > 0 ? *(n2 + --len2) - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		sum %= 10;

		if (lenr >= size_r - 1)
			return (NULL);

		*(r + lenr++) = sum + '0';
	}
	*(r + lenr) = '\0';
	reverse_string(r);

	return (r);
}

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (EXIT_SUCCESS)
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			c = i + '0';	/* convert integer to character */
		} else
		{
			c = i - 10 + 'a';	/* convert integer to lowercase hexadecimal character */
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}

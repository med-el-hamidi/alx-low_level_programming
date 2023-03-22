#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (EXIT_SUCCESS)
 *
 */
int main(void)
{
	int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}

		c = a + b;
		a = b;
		b = c;
	}

	printf("%d\n", sum);

	return (0);
}

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase  without q and e.
 *
 * Return: Always 0 (EXIT_SUCCESS)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}

	putchar('\n');
	return (0);
}

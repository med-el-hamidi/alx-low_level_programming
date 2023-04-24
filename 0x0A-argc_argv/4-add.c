#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1) /* no arguments*/
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		int num = 0;
		char *arg = argv[i];

		for (int j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] >= '0' && arg[j] <= '9')
			{
				num = num * 10 + (arg[j] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

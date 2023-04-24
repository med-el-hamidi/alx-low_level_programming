#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (EXIT_SUCCESS)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

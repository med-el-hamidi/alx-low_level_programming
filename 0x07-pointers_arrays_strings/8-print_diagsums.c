#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix.
 *
 * @a: pointer to an integer array representing the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* sum of diagonal from top-left to bottom-right */
		sum1 += *(a + i * size + i);
		/* sum of diagonal from top-right to bottom-left */
		sum2 += *(a + i * size + size - 1 - i);
	}
	printf("Sum of diagonal from top-left to bottom-right: %d\n", sum1);
	printf("Sum of diagonal from top-right to bottom-left: %d\n", sum2);
}

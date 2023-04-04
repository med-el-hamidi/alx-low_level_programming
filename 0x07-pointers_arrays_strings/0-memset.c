#include "main.h"
/**
 * _memset - fill memory with a constant byte.
 * @s: starting address of memory to be filled
 * @b: the constant int
 * @n: number of bytes to be changed
 *
 * Return: changed array with has value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

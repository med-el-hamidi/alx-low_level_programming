#include "main.h"

/**
 *_memcpy - copies memory area.
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strncat - concatenates two strings like strncat,
 *  using at most n bytes from src.
 * @dest:input value
 * @src: input value
 * @n: input value
 *
 * Return: char * (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while (*src && n > 0)
	{
		*p++ = *src++;
		n--;

	}

	*p = '\0';

	return (dest);
}

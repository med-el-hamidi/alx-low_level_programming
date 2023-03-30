#include "main.h"
/**
 * _strcat - concatenates two strings like strncat.
 * @dest:input value
 * @src: input value
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

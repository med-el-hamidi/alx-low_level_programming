#include "main.h"
/**
 * _strcat - concatenates two strings like strcat.
 * @dest:input value
 * @src: input value
 *
 * Return: char * (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while (*src)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}

#include "main.h"
/**
 * _strncpy - concatenates two strings like strncpy,
 *  using at most n bytes from src.
 * @dest:input value
 * @src: input value
 * @n: input value
 *
 * Return: char * (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src && n > 0)
	{
		*p++ = *src++;
		n--;

	}

	while (n > 0)
	{
		*p = '\0';
		n--;
	}

	return (dest);
}

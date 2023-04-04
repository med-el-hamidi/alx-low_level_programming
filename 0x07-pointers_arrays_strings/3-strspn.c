#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input string to search for substring
 * @accept: set of bytes to match
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p = accept;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}

	return (len);
}

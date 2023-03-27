#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: Always an integer; the length of a string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char rev = *s;
	int len = 0;
	int i;

	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		len--;
		rev = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = rev;
	}
}

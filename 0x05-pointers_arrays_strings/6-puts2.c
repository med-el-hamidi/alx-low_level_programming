#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *  starting with the first character, followed by a new line.
 * @str: string
 *
 */

void puts2(char *str)
{
	int len = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0 ; i < len ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

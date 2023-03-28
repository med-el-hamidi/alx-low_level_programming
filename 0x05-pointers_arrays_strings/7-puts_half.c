#include "main.h"

/**
 * puts_half - prints half of a string
 *  if odd len, n = (length_of_the_string - 1) / 2.
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i, len_half, len = 0;
	char *s = str;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	len_half = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	for (i = len_half ; *(str + i) != '\0' ; i++)
		_putchar(*(str + i));

	_putchar('\n');
}


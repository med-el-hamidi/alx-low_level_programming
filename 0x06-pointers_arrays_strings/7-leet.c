#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to be encoded
 *
 * Return:char * (Pointer to the encoded string)
 */
char *leet(char *str)
{
	int i, j;

	char *leet = "43071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; "aAeEoOtTlL"[j]; j++)
		{
			if (str[i] == "aAeEoOtTlL"[j])
			{
				str[i] = leet[j / 2];
				break;
			}
		}
	}

	return (str);
}

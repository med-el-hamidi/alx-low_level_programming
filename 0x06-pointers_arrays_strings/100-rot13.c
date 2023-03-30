#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}

	return (str);
}

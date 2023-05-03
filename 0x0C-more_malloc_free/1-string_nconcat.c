#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to concatenate.
 *
 * Return: Pointer to the newly allocated memory containing
 * the concatenated string, NULL if allocation fails or
 * if s1 and s2 are both NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, concat_len = 0;
	char *concat;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;

	concat = malloc(sizeof(char) * (concat_len + 1));

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(concat, s1);
	else
		*concat = '\0';

	strncat(concat, s2, n);

	return (concat);
}

#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments.
 * @av: an array of strings containing the arguments.
 *
 * Return: a pointer to a new string containing the concatenated arguments
 * or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	str = malloc(sizeof(char) * (len + ac + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}

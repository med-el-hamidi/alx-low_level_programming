#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: int to check
* Return: Always 0 (EXIT_SUCCESS).
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

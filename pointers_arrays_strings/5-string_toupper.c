#include "main.h"

/**
 * string_toupper - capatalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capatalized
 */

char *string_toupper(char *s)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}

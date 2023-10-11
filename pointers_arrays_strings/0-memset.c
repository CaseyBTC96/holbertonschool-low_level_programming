#include "main.h"
/**
 * _memset - Fills memory with constant bytthe first n bytes of the memory area
 * pointed to by s with the constant b
 *
 * @s: This is  the output and the return
 * @b: This is the input string
 * @n: This iss the number of bytess
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}

#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to dest
 *
 * @dest: This is the output string
 * @src: This is the input string
 * @n: This is the number of bytess to copy
 *
 * Return: This is the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	char *pDst = dest;
	char const *pSrc = src;

	for (count = 0; count < n; count++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}

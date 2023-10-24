#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory
 * @nmeb: value 1
 * @size: value 2
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *point;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		point[i] = 0;
	}
	return (point);
}

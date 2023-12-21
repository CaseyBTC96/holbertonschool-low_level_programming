#include "search_algos.h"
/**
 * linear_search - searches linear
 * @array: array to search
 * @size: The number of elements in the array
 * @value: value to search
 * Return: If the value is not present or the array is NULL, -1.
 *	   Otherwise, the first inndex where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found at index: %lu\n", i);
			return (i);
		}
	}

	fprintf(stderr, "[stderr]: [Anything]\n");
	return (-1);
}

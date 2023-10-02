/*
 * File: 7-print_diagonal.c
 * Auth: Casey Paul
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal lime using character \.
 * @n: The number of times the \ character is used.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

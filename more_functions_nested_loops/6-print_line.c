/*
 * File: 6-print_line.c
 * Auth: Casey Paul
 */

#include "main.h"

/**
 * print_line - draws a straight line using the _ character.
 * @n: - the number _  charcter to be printd.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}

/*
 * File: 11-print_to_98.c
 * Auth: Casey Paul
 */

#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98,
 *		in  order seperated by a  comma followed by a space.
 * @n: The number to beginn counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

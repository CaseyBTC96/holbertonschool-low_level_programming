/*
 * File: 1-swap.c
 * Auth: Casey Paul
 */

#include "main.h"

/**
 * swap_int - Swaps the values of two integers a & b.
 * @a: Integer to be swapped.
 * @b: Integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp  = *a;
	*a = *b;
	*b = tmp;
}

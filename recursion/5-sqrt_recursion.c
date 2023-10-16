/*
 * File 5-sqrt_recursion.c
 * Auth: Casey Paul
 */

#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a numberr.
 * @n: the number to return the square root of.
 *
 * Return: if n has a natural square root - the natural square root of n.
 *	   if n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	int root = _sqrt_recursion(n - 1);

	if (root * root <= n)
		return (root);

	else
		return (root - 1);
}

/*
 * file: 6-is_prime_number.c
 * Auth: Casey Paul
 */

#include "main.h"
/**
 * prime_check - check if number is prime
 * @n: Number to check
 * @f: number to check against
 *
 * Return: 1 if prime, 0 if otherwise.
 */
int prime_check(int n, int f)
{
	if (n % f == 0 && f != (n / 2))
		return (0);
	else if (f >= (n / 2))
		return (1);
	else
		return (prime_check(n, f + 1));
}
/**
 * is_prime_number - returns 1 if input integer is a prime number,
 *			otherwise return 0.
 * @n: the number to be checked.
 *
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime_check(n, 2));
	else if (n < 0)
		return (0);
	return (0);
}

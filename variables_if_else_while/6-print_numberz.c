#include <stdio.h>
/**
 * main - print all single digit numbersss of base 10 starting at 0.
 *
 * Return: Always (0)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

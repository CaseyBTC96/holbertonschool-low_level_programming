/*
 * File: 0-whatsmyname.c
 * Auth: Casey Paul
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

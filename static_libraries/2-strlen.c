/*
 * File: 2-strlen.c
 * Auth: Casey Paul
 */

#include "main.h"

/**
 * _strlen - returns the length of the string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int  _strlen(char *s)
{
        int len = 0;

        while (*s++)
                len++;

        return (len);
}

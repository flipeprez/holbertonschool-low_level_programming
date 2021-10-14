#include <stdio.h>
#include "main.h"

/**
 * _strcpy -Write a function that prints n elements of an array-
 *
 *@dest: variable name
 *@src: variable name
 *
 *
 * Return: value
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != 0; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = 0;

	return (dest);
}

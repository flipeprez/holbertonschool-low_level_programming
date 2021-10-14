#include "main.h"
#include <stdio.h>


/**
 * print_array - function print numbers elements for array-
 *
 *@a:int value
 *@n:int value
 *
 * Return: numbers of elements
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}

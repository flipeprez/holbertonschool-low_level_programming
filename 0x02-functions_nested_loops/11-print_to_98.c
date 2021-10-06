#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - add function -
 *@n:variable name
 *Return: c
 */

void print_to_98(int n)

{
	for (; n < 99; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');

	}
}

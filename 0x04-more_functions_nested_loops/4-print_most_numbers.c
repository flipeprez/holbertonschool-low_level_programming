#include "main.h"

/**
 * print_most_numbers -print number between 0 and 9, but not 2 and 4-
 *
 *
 *Return: print number
 */

void print_most_numbers(void)

{
	int i;

	for (i = 48; i <= 57; i++)
	{
	if (i != 50 && i != 52)
		{
		_putchar(i);
		_putchar(10);
		}
	}
}

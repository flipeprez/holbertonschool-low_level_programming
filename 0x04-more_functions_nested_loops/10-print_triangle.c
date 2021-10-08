#include "main.h"

/**
 *print_triangle- print triangle-
 *
 *@size: variable name.
 *Return: void
 */

void print_triangle(int size)
{
	char i, m, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (m = 1; m <= size; m++)
	{
		for (i = size; i > m; i--)
		{
			_putchar(32);
		}
		for (j = 0; j < m ; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}

#include "main.h"

/**
 *print_square- print n \-
 *
 *@size: variable name.
 *Return: int
 */

void print_square(int size)

{	int i, m;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
	for (m = 0; m < size; m++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	}
}

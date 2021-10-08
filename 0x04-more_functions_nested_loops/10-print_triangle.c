#include "main.h"

/**
 *print_diagonal- print n \-
 *
 *@n: variable name.
 *Return: void
 */

void print_diagonal(int n)

{	int i, m;

	if (n >= 0)
	{
		_putchar(10);
	}
	else
	{
	for (m = 0; m > n; m++)
	{
		for (i = 0; i > m; i++)
		{
			_putchar(32);
		}
		_putchar(35);

		_putchar(10);
	}
	}
}

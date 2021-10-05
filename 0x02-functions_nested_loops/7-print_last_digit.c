#include "main.h"

/**
 *print_last_digit -print the last digit-
 *@n: variable name.
 *Return: 0
 */

int print_last_digit(int n)

{
	n = n % 10;
	if (n < 0)
	{
	n = n * (-1);
	_putchar(n + '0');
	}

	return (n);
}

#include "main.h"

/**
 *print_last_digit -print the last digit-
 *@n: variable name.
 *Return: 0
 */

int print_last_digit(int n)

{
	if (n < 0)
	{
		_putchar((n % 10) * (-1) + 48);
		return ((n % 10) * (-1) + 48);
	}
		else
		_putchar((n % 10) + 48);
		return ((n % 10) + 48);

}

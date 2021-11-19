#include "main.h"
/**
 * printauxbin - logic to binary number.
 * @n: value of variable.
 */

void printauxbin(unsigned long int n)
{
	if (n == 0)
		return;
	printauxbin((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - print binary.
 * @n:variable value.
 * Return:binary number.
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
		_putchar('0');
	else
		printauxbin(n);
}

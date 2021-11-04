#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include "_putchar.c"

/**
 * sum_them_all - function sum.
 * @n:constant
 * Return:int.
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	unsigned int i, add;

	if (n == 0)
		return (0);
	va_start(li, n);

	add = 0;
	for (i = 0; i < n; i++)
		add += va_arg(li, unsigned int);
	va_end(li);
		return (add);

	_putchar(add);
}


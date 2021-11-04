#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function than print numbers.
 * @n:constant
 * @separator: parameter.
 * Return:int.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	if (separator == 0)
		separator = "";
	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, unsigned int));
		printf("%s", separator + 2 - 1);
	}
	printf("\n");
	va_end(li);
}

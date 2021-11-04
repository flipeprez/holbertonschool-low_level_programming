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

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, unsigned int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}

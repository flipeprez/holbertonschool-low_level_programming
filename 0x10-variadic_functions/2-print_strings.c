#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function than print numbers.
 * @n:constant
 * @separator: parameter.
 * Return:int.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *ov;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		ov = va_arg(li, char *);
		if (ov == NULL)
			printf("(nil)");
		else
			printf("%s", ov);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format:arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *auxs, *separator;
	int a;
	va_list li;

	a = 0;
	separator = "";
	va_start(li, format);
	while (format && format[a])
	{
		switch (format[a])
		{	case ('c'):
				printf("%s", separator);
				printf("%c", va_arg(li, int));
			break;
			case('i'):
				printf("%s", separator);
				printf("%d", va_arg(li, int));
			break;
			case('s'):
				auxs = va_arg(li, char *);
				if (auxs == NULL)
				{
					printf("%s", separator);
					printf("(nill)");
					break;
				}
				printf("%s", separator);
				printf("%s", auxs);
			break;
			case('f'):
				printf("%s", separator);
				printf("%f", va_arg(li, double));
			break;
		}
	separator = ", ";
	a++;
	}
	printf("\n");
	va_end(li);
}

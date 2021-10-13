#include "main.h"

/**
 * print_rev -print a reverse string, followed by a new line -
 *@s:variable value.
 *
 * Return:0
 */

void print_rev(char *s)
{

	int ns = 0;

	while (s[ns] != '\0')
	{
		ns++;
	}
	while (ns >= 0)
	{
		_putchar(s[ns]);

		(ns--);
	}
	_putchar(10);

}

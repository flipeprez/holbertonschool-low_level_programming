#include <stdio.h>
#include "main.h"

/**
 * _puts -print a string, followed by a new line -
 *@str:variable value.
 *
 * Return:0
 */

void _puts(char *str)
{
	int nstr = 0;

	for (nstr = 0; str[nstr] != '\0'; nstr++)
	{
		;
	}
		_putchar(nstr);
		_putchar(10);
}

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
	int nstr;

	for (nstr = 0; str[nstr] != '\0'; nstr++)
	{
		_putchar(str[nstr]);
	}
		_putchar(10);
}

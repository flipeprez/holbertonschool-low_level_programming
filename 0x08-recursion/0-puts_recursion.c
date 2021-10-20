
#include "main.h"

/**
 * _puts_recursion- prints a string
 *
 *@s:variable value.
 *
 *
 * Return:s
 */

void _puts_recursion(char *s)

{
	if (*s == 0)
	{
	_putchar(10);
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

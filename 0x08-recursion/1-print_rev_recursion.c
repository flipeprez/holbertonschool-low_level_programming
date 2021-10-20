#include "main.h"

/**
 * _print_rev_recursion- prints strings in reverse.
 *@s:variable value
 * Return:string in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

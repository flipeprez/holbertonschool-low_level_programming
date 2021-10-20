#include "main.h"
#include "_putchar.c"
/**
 * _strlen_recursion - return the length of a string using recursion.
 *@s:variable value.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)

{

	if (*s)

	{
		return (_strlen_recursion(s + 1) + 1);

	}
		return (0);

}

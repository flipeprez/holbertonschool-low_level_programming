#include <stdio.h>
#include "main.h"
/**
 * _memset -fills memory with constant byte-
 *@s:variable value.
 *@b:variable value.
 *@n:variable value.
 * Return:dest.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

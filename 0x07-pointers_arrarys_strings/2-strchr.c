#include "main.h"
#include <stdio.h>
/**
 * _strchr -copie memory area -
 *
 *@s: variable value.
 *@c: variable value.
 * Return:dest.
 */

char *_strchr(char *s, char c)

{
	unsigned int i = 0;

	for (i = 0; s[i] != c && s[i] != 0; i++)
	{
	}
		if (s[i] == c)
		{
		return (&s[i]);
		}
		else
			return (0);
}

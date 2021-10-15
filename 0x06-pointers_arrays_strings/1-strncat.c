#include "main.h"
#include <stdio.h>
/**
 * _strncat -concatenetes two arrays-
 *@dest:destination value.
 *@src:source value.
 *@n: variable name.
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int corredor;

	for (corredor = 0; dest[corredor] != '\0'; corredor++)
	{
		;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i + corredor] = src[i];

	}
	return (dest);

}

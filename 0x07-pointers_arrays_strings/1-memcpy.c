#include "main.h"
#include <stdio.h>
/**
 * _memcpy -copie memory area -
 *@src:variable value.
 *@dest:variable value.
 *@n:variable value.
 * Return:dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

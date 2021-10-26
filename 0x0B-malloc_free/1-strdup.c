#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer toa new string.
 * @str: value name
 *
 * Return:return a pointer to a new string which is duplicated.
 */
char *_strdup(char *str)
{
	char *va;

	int nva;

	int onva;

	for (nva = 0; str[nva] != 0; nva++)
	{
	}

	va = malloc(sizeof(char) * nva + 1);

	if (va == 0)
	{
		return (NULL);
	}
	for (onva = 0; va[onva]  <= 0; onva++)
	{
		va[onva] = str[onva];
	}
	return (va);
}

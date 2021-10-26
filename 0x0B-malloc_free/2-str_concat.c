#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenetes two string.
 * @s1: value name
 * @s2: value name
 *
 * Return:s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *va;

	int a = 0, s = 0, d, f;

	if (s1 == 0 && s2 == 0)
	{
		return ("");
	}
	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	for (a = 0; s1[a] != 0; a++)
	{}
	for (s = 0; s2[s] != 0; s++)
	{}

	va = malloc(sizeof(char) * a + s + 1);
	if (va == 0)
	{
	return (0);
	}
	for (d = 0; s1[d] != 0; d++)
	{
		va[d] = s1[d];
	}
	for (f = 0; s2[f] != 0; f++)
	{
		va[f + d] = s2[f];
	}

	return (va);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenetes two string.
 * @s1: value name
 * @s2: value name
 * @n:value name
 * Return:s1 + s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *va;

	unsigned int a = 0, s = 0, d, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != 0; a++)
	{}
	for (s = 0; s2[s] != 0; s++)
	{}
	va = malloc(sizeof(char) * (a + n) + 1);
	if (va == 0)
	return (NULL);
	for (d = 0; d < a; d++)
		va[d] = s1[d];
	for (f = d; f < (d + n); f++)
		va[f] = s2[f - d];
	return (va);
}

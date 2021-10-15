#include "main.h"
#include <stdio.h>
/**
 * _strcmp -concatenetes two arrays-
 *@s1:variable value.
 *@s2:variable value.
 *
 * Return:value.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int dif;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	dif = s1[i] - s2[i];

	return (dif);

}

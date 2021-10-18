#include "main.h"
#include <stdio.h>
/**
 * _strspn -get length of a prefix substring -
 *
 *@s: variable value.
 *@accept: variable value.
 * Return:dest.
 */

unsigned int _strspn(char *s, char *accept)

{
	int i = 0;

	int j = 0;

	int diff = 0;


	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				diff++;
				break;
			}
		}
		if (accept[j] == 0 && diff != 0)
			break;
	}
	return (diff);
}

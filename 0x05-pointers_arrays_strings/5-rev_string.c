#include "main.h"
#include <stdio.h>
/**
 * rev_string -reverse string-
 *
 *@s:variable value.
 * return:0
 */

void rev_string(char *s)
{
	int lar = 0;

	int i;

	char  ch;


	while (s[lar] != '\0')
	{
		lar++;


	}
	for (i = 0; i < lar; i++)
	{
		lar--;
		ch = s[i];
		s[i] = s[lar];
		s[lar] = ch;
	}

}

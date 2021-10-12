#include "main.h"
#include <stdio.h>
/**
 * _strlen -return the length of a string-
 *@s:variable value.
 *
 * Return:0
 */

int _strlen(char *s)
{

	int corredor = 0;

	for (corredor = 0; s[corredor] != '0'; corredor++)
	{
		corredor++;
	}
	return (corredor);
}

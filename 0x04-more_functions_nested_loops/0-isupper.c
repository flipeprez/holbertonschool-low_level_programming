#include "main.h"

/**
 *_isupper -show the uppercase-
 *@c: variable name.
 *Return: 1
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 *_islower -show lower_case-
 *@c: variable name.
 *Return: 1
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

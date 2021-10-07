#include "main.h"

/**
 *_isdigit -show digit-
 *@c: variable name.
 *Return: 0
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

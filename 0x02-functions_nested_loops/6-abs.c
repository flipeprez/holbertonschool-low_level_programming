#include "main.h"

/**
 *_abs -show absolute value-
 *@n: variable name.
 *Return: 0
 */

int _abs(int n)

{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}

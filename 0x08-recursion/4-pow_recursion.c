#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion- return the value of x to the power of y.
 *@x:variable value.
 *@y:variable value.
 * Return:pow.
 */
int _pow_recursion(int x, int y)

{
	if (y < 0)
	{

	return (-1);

	}
	if (y == 0)
	{
	return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

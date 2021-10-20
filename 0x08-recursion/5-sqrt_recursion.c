#include "main.h"
#include <stdio.h>

/**
 * auxfunction- returns the natural square root of a number.
 *@n: variable value.
 *@i: variable value.
 * Return: natural sqr
 */
int auxfunction(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
		return (auxfunction(n, (i + 1)));
}

/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n:variable value.
 * Return: natural sqr.
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{

	return (-1);

	}
	return (auxfunction(n, 0));


}

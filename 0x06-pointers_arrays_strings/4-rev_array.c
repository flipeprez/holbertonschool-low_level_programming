#include "main.h"

/**
 * reverse_array -print a reverse string, followed by a new line -
 *@a:variable value.
 *@n:variable value.
 * Return:0
 */

void reverse_array(int *a, int n)
{

	int ns = 0;

	int n;

	while (a[ns] != '\0')
	{
		ns++;
	}

	ns--;

	while (ns >= 0)
	{
		(a[ns]);

		(ns--);
	}
	return;

}

#include "main.h"

/**
 * reverse_array -print a reverse string, followed by a new line -
 *@a:variable value.
 *@n:variable value.
 * Return:0
 */

void reverse_array(int *a, int n)
{

	int i;

	int ch;
	int ov = n;

	for (i = 0; i < ov; i++)
	{
		ov--;
		ch = a[i];
		a[i] = a[ov];
		a[ov] = ch;
	}


}

#include "main.h"
#include <stdio.h>
/**
 * swap_int -swap the values of two integers-
 *@b:variable value.
 *@a:variable value.
 * return:0
 */

void swap_int(int *a, int *b)
{
	int na, nb, st;

	a = &na;
	b = &nb;

	st = *b;
	*b = *a;
	*a = st;

}

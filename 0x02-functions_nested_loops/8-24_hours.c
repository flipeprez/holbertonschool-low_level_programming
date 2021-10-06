#include "main.h"

/**
 *jack_bauer -a function that prints every minute of the day -
 *
 *Return: 0
 */

void jack_bauer(void)

{
		int m;
		int n;

	for (m = 0; m < 9; m++)
	{
		for (n = 0; n < 9; n++)
		{
			_putchar(n);
		}
		_putchar(m);
	}

}

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

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 50; n++)
		{
			_putchar(m);
			_putchar(n);
			_putchar(':');
			_putchar('\n');
		}
		_putchar(m);
	}

}

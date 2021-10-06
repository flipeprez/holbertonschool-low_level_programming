#include "main.h"

/**
 *jack_bauer -a function that prints every minute of the day -
 *
 *Return: 0
 */

void jack_bauer(void)

{
		int h;
		int h1;
		int m;
		int n;
	for (h = 48; h <= 50; h++)
	{
		for (h1 = 48; h1 <= 57; h1++)
		{
			_putchar(h);
			_putchar(h1);
		}
	for (m = 48; m <= 53; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			_putchar(':');
			_putchar(m);
			_putchar(n);
			_putchar('\n');
		}

	}
	}

}

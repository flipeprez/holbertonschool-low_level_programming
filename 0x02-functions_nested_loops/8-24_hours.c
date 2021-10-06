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

	for (m = 48; m <= 53; m++)
	{
		for (n = 0; n <= 57; n++)
		{
			_putchar(m);
			_putchar(n);
			_putchar(':');
			_putchar('\n');
		}

	}

}

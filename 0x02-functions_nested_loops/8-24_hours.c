#include "main.h"

/**
 *jack_bauer -a function that prints every minute of the day -
 *
 *Return: 0
 */

void jack_bauer(void)

{
		int l;
		int r;
	for (l = 0; l <= 23; l++)
	{
		for (r = 0; r <= 59; r++)
		{
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar(':');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar('\n');
		}
	}
}

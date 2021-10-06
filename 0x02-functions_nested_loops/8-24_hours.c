#include "main.h"

/**
 *jack_bauer -a function that prints every minute of the day -
 *
 *Return: 0
 */

void jack_bauer(void)

{
		int sd;
		int su;

	for (sd = 48; sd <= 53; sd++)
	{
		for (su = 0; su <= 57; su++)
		{
			_putchar(sd);
			_putchar(su);
			_putchar(':');
			_putchar('\n');
		}
		_putchar(sd);
	}

}

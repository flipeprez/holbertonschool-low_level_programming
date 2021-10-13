#include "main.h"

/**
 * puts_half -prints half string-
 *@str:variable value.
 *
 * Return:0
 */

void puts_half(char *str)
{

	int i, ns;

	for (i = 0; str[i] != '\0';)

		i++;

	if (i % 2 == 0)

		ns = i / 2;
	else
		ns = (i + 1) / 2;

	while (str[ns] != '\0')
	{

		_putchar(str[ns]);
		ns++;
	}
	_putchar(10);
}

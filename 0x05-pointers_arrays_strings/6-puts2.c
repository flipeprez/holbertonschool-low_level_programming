#include "main.h"

/**
 * puts2 -prints every other character, starting with the first character-
 *@str:variable value.
 *
 * Return:0
 */

void puts2(char *str)
{

	int ns = 0;

	while (str[ns] != '\0')
	{
		_putchar(str[ns]);

		ns += 2;

	}
	_putchar(10);

}

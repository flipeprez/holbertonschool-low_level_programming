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
		if (ns % 2 == 0)
		{
			ns++;
			_putchar(str[ns]);
		}

	}
	_putchar(10);

}

#include "main.h"

/**
 *print_alphabet_x10 -print 10 alphabet-
 *Return: void
 */

void print_alphabet_x10(void)

{

	int alph;

	int n;

	for (n = 0; n <= 10; n++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
		_putchar('\n');
	}

}

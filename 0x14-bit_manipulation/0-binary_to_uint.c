#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: variable string.
 * Return: unsigned int from binary.
 */

unsigned int binary_to_uint(const char *b)
{
	int largo, m, n;
	int base = 2;
	int add = 0;
	int pow = 1;

	if (b == NULL)
		return (0);
	for (largo = 0; b[largo] != '\0'; largo++)
		;
	if (largo == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));

	for (m = 0; b[m] != 0; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
		for (n = largo - 1; n > 0; n--)
			pow = pow * base;
		add = add + (pow * (b[m] - 48));
		largo--;
		pow = 1;
	}
	return (add);
}


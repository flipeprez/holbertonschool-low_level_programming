#include "main.h"
/**
 * get_bit - return the value of a bit at a given index.
 * @n:value.
 * @index:given index.
 * Return:the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r;

	if (index > sizeof(8) * 8)
		return (-1);
	for (r = 0; r < index; r++)
		n = n >> 1;
	return ((n & 1));
}

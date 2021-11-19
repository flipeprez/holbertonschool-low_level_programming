#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at given index.
 * @n:pointer n.
 * @index:given index.
 * Return:value of a bit to 1 at a given index.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int sbo = 1;

	if (index > sizeof(int) * 8)
		return (-1);
	sbo = sbo << index;
	*n = ((*n) | sbo);
	return (1);

}

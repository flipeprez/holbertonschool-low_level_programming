#include "main.h"
/**
 * clear_bit - set value of a bit to 0.
 *@n: Pointer value
 * @index: Index to modify
 * Return: 1 if it ok -1 if is not ok.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int sbo;

	sbo = 1;
	sbo = sbo << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = sbo ^ *n;

	return (1);
}

#include "main.h"
/**
 * flip_bits - flip bits
 * @n: variable
 * @m: variable
 * Return: bits you need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int contador;
	int resultado;

	resultado = n ^ m;
	for (contador = 0; resultado > 0;)
	{
		if ((resultado & 1) == 1)
			contador++;
		resultado = resultado >> 1;
	}

	return (contador);
}

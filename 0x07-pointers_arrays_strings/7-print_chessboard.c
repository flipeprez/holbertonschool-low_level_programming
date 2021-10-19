#include "main.h"
#include <stdio.h>

/**
 * print_chessboard- function that prints the chessboard.
 *@a: variable value
 * Return: print chessboard.
 */
void print_chessboard(char (*a)[8])
{

	int v = 0;

	int nv;


	for (v = 0; v < 8; v++)
	{
		for (nv = 0; nv < 8; nv++)
		{
			_putchar(a[v][nv]);
		}
		_putchar('\n');
	}

}

#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
/**
 * main - name function.
 *@argc: counter.
 *@argv: vector.
 *Return:0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(argv[1])(atoi(argv[2]), atoi(argv[3])));
		return (0);
}

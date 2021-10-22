#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers.
 * @argc:counter.
 * @argv:vector.
 * Return:multiplies of two numbers.
 */

int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc == 3)
	{

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}

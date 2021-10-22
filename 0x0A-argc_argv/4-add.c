#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - function adds positive numbers.
 * @argc: counter.
 * @argv: vector.
 * Return: addition of positive numbers.
 */

int main(int argc, char *argv[])
{
	int i, a, sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != 0; a++)
		{
			if (!isdigit(argv[i][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

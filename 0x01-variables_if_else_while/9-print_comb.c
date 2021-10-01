#include<stdio.h>
/**
 * * main -putchar
 * * Return: 0
 */

int main(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
	putchar(n);
	if (n < 57)
	{
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar('\n');
	}
	n++;
	}

	return (0);
}

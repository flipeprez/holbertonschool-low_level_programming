#include<stdio.h>
/**
 * * main -putchar
 * * Return: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(',');
	putchar(n);
	putchar('\n');
	return (0);
}

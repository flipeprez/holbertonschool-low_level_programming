#include <stdio.h>
/**
 * * main -00 to 99
 * * Return: 0
 */

int main(void)
{
	int n, n1;

	for (n = 48; n <= 57; n++)
	{
		for (n1 = n; n1 <= 57; n1++)
		{
			if (n1 > n)
			{
				putchar (n);
				putchar (n1);
			}
			if (n <= 57)
			{
				putchar(' ');
				putchar(',');

			} else
			{
				putchar('\n');
			}
		}
	}
	return (0);
}

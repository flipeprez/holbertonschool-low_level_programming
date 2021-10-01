#include <stdio.h>
/**
 * * main -putchar
 * * Return: 0
 */

int main(void)
{

	int a;

	a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
			a++;
		}
		else
		{
			a++;
		}
	}
	putchar('\n');
	return (0);
}

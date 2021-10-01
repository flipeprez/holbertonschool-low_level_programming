#include <stdio.h>
/**
* * main -putchar
* * Return: 0
 */

int main(void)
{
		int chm;
		int ch;

		for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
		for (chm = 'a'; chm <= 'f'; chm++)
		putchar(chm);
		putchar('\n');
		return (0);
}

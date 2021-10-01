#include <stdio.h>
/**
* * main -putchar
* * Return: 0
 */

int main(void)
{
		int chm;
		int ch;

		for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
		for (chm = '0'; chm <= '9'; chm++)
		putchar(chm);
		putchar('\n');
		return (0);
}

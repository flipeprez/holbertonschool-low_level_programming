#include <stdio.h>
/**
* * main -putchar
* * Return: 0
 */

int main(void)
{
		int ch;
		int chm;

		for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		for (chm = 'A'; chm <= 'Z'; chm++)
		putchar(chm);
		putchar('\n');
		return (0);
}

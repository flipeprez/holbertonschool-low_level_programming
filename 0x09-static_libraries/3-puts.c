#include "main.h"
void _puts(char *s)
{
	int nstr;

	for (nstr = 0; s[nstr] != '\0'; nstr++)
	{
		_putchar(s[nstr]);
	}
		_putchar(10);
}

void _puts(char *s)
{
	int nstr;

	for (nstr = 0; str[nstr] != '\0'; nstr++)
	{
		_putchar(str[nstr]);
	}
		_putchar(10);
}

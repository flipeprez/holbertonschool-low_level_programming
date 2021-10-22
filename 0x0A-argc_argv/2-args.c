#include <stdio.h>
/**
 * main -prints all arguments it recives.
 * @argc:counter.
 * @argv:vector variable.
 * Return:all arguments it recives
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argc;
	return (0);





}

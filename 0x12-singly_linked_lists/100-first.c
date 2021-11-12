#include <stdio.h>
/**
  * premain - print before main executes
  * Return: 0:
  */
void premain(void) __attribute__ ((constructor));
void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - add function
 * op_sub - sub function
 * op_mul - product for a and b
 * op_div - division for a and b
 * op_mod - module function
 * @a: int value
 * @b: int value
 */

int op_add(int a, int b)
{
	return ((a + b));
}
int op_sub(int a, int b)
{
	return ((a - b));
}
int op_mul(int a, int b)
{
	return ((a * b));
}
int op_div(int a, int b)
{
	if (b == 0)
		return ((a / b));
	else
		printf("error\n");
		exit(100);
}
int op_mod(int a, int b)
{
	if (b == 0)
		return ((a % b));
	else
		printf("error\n");
		exit(100);
}

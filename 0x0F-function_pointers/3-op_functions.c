#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - add function
 * @a: int value
 * @b: int value
 * Return:int
 */

int op_add(int a, int b)
{
	return ((a + b));
}
/**
 * op_sub - subfunction
 * @a:int value
 * @b:int value
 * Return:int
 */
int op_sub(int a, int b)
{
	return ((a - b));
}
/**
 * op_mul - product a and b
 * @a:int value
 * @b:int value
 * Return:int
 */
int op_mul(int a, int b)
{
	return ((a * b));
}
/**
 * op_div -division for a and b
 * @a:int value
 * @b:int value
 * Return:int
 */
int op_div(int a, int b)
{
	if (b == 0)
		return ((a / b));
	printf("Error\n");
	exit(100);
}
/**
 * op_mod -module
 * @a:int value
 * @b:int value
 * Return:int
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return ((a % b));
	printf("Error\n");
	exit(100);
}

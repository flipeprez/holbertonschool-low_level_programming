#include "main.h"



/**
 * auxfunction - auxiliar function.
 *@n:variable value.
 *@i:variable value.
 * Return: aux.
 */

int auxfunction(int n, int i)
{
	if (i == n)

		return (1);

	if ((n % i) == 0)

		return (0);

	else
		return (auxfunction(n, (i + 1)));


}
/**
 * is_prime_number - prime number.
 *@n:variable value.
 * Return: prime number.
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (auxfunction(n, 2));
	else
		return (0);
}

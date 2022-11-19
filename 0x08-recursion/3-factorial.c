#include "main.h"
/**
 * factorial - get factorial of n
 * @n: integer
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriatelly.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		eturn (1);
	return (n * factorial(n - 1));
}

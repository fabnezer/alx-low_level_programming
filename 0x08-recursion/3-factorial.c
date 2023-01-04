#include "main.h"

/**
 * factorial -Retrurnd the factorial o a given number
 * @n: the number to find the factorial of
 * Return: if n > 0 the factorial of n
 *if n< 0 to indicate an error -1.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return -(1);
	else
	return (n * factorial(n - 1));	
}

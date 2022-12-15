#include "main.h"

/**
 * print_sign-print the sign of the number
 * @n: the number of the sign to br printed
 * Return: 1 if number is greater than zero
 * 0 of number is zero
 *  -1 if number is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}

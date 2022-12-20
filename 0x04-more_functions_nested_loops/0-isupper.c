#include "main.h"

/**
 * _0-isupper cheacks for uppercase charchter
 * @c: the charachter to be chechked.
 *
 * Return: 1 if the charchter is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

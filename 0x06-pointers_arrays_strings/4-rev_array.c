#include "main.h"

/**
 * reverse_array - Reverse the content of an array of intigers.
 * @a: the  array of intigers to be reversed
 * @n: the number of elemnts in the array.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}

#include"main.h"
#include <stdio.h>

/**
 * prints_ array - print n elemnt of an array of  intigers.
 * @a: Array of intigers
 * @n: number of elemnts of the array 
 * return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d" , a[j]);
	if (j != (n-1))
	{
	printf(" , ");
	}
	}
	printf('\n');
}

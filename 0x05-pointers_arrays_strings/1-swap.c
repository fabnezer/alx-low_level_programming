#include<stdio.h>

/**
 * swaps_int  - swaps the valur of two intigers.
 * @a: the first intiger to be swaped.
 * @b: the second intiger to be swaped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
	/*the function that swaps the value of two intigers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

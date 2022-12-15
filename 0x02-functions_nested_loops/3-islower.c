#include "main.h"

/**
 *  islower - checks if the charachter is lowercase
 *  @c: the charachter
 *  Returns:  1 if letter is lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

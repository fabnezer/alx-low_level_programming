#include "main.h"

/**
 * _strncpy - Copies at most an iputted number
 * of bytes from src to dest
 * @dest: the buffer stooring the string copy
 * @src: the source sstring
 * @n: the maximal nuber of bytes.
 * Return: a pointer to the resulting string of dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	 int index = 0, src_len = 0;
	 while (src[index++])
	 src_len++; 
	 for (index = 0; src[index] && index < n; index++)
	 dest[index] = src[index];

	 for (index = src_len; index < n; index++)
	 dest[index] = '\0';

	 return (dest);

}

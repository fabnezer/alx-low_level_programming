#include<stdio.h>

/**
 * _strlen - Returns the length of the string.
 * @str: the string to get tje length
 * Retrun: the length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}

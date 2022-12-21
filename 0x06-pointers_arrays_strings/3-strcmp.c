#include "main.h"

/**
 * -strcmp - Compares pointers to two strings.
 *  @s1: A pointer to the first string to be compared.
 *  @s2: A pointer to the second string to be compared.
 *  Return: if str1 < str2, the negative differnce of the first unmatched charachters.
 *  if str1 == str2, 0.
 *  if str 1 > str2 the positve differnce of the firsst .
 */ 

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1-*s2);
}

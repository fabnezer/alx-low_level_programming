#include"main.h"
/**
* _memset - fillea bloack of memory with specific value
*@s: starting adress
*@b: the desired vale
*@n: number of biteto be filled
Return: changed arrays with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;
	for (; n > 0; i++)
	{
	 	s[i] = b;
		n--;
	}
       	return(s);
}

#include"main.h"
#include <unisted.h>
/**
 *  _putchar - writest the charahcher  c stdout
 *  @c: the charachter to print
 *   Return : on sucess 1
 *   on error, -1  is returened an errno is set apprpritaley
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	

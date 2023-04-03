#include "main.h"
/**
 * _memset -  memory with a specific value
 * @s: address of memory 
 * @b: value
 * @n: bytes to be changed
 *
 * Return: array with new value for n byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
        
	char *p = s;
   
	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}

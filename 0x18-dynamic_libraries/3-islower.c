#include "main.h"
/**
 * _islower - shows 1 if the input is a lower case character
 * @c: is the char to be checked
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}

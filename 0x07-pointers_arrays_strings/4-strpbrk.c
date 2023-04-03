#include <string.h>
#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input task
 * @accept: input ask
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	size_t m, n;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				return (s + n);
			}
		}
	}
	return (NULL);
}

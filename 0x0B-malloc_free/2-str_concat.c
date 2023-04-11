#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int x, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = k = 0;

	while (s1[x] != '\0')
		x++;

	while (s2[k] != '\0')
		k++;

	p = malloc(sizeof(char) * (x + k + 1));

	if (p == NULL)
		return (NULL);

	x = k = 0;

	while (s1[x] != '\0')
	{
		p[x] = s1[x];
		x++;
	}
	while (s2[k] != '\0')
	{
		p[x] = s2[k];

		x++, k++;
	}
	p[x] = '\0';

	return (p);
}


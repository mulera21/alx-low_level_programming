#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *w;
	int z, px = 0;

	if (str == NULL)
		return (NULL);
	z = 0;

	while (str[z] != '\0')
		z++;
	w = malloc(sizeof(char) * (z + 1));

	if (w == NULL)

		return (NULL);

	for (px = 0; str[px]; px++)

		w[px] = str[px];
	return (w);
}


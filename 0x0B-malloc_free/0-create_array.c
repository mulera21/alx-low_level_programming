#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int m;

	z = malloc(sizeof(char) * size);

	if (size == 0 || z == NULL)
		return (NULL);

	for (m = 0; m < size; m++)

		z[m] = c;
	return (z);
}


#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size
 * Return: pointer to array,
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NUlL);
	}
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}


#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sumw = 0, sum2 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		sumw += *(a + y * size + y);
		sum2 += *(a + y * size + size - y - 1);
	}
	printf("Sum of the first  %d\n", sumw);
	printf("Sum of the second  %d\n", sum2);
}

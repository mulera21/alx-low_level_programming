#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Entry
 * @a: array input.
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{	
	int z;

	for (z = 0; z < 8; ++z)
	{	
		int j;
		
		for (j = 0; j < 8; ++j)
		{
			printf("%c ", a[z][j]);
		}
		printf("\n");
	}
}

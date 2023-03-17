#include <stdio.h>
/**
 *main - Entry point
 * function_main - prints the alphabet in lowercase, and then in uppercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	/*prints a to z*/
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}

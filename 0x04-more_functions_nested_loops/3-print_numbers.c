#include "main.h"

/**
 * print_numbers - function that print number from 
 * 0 to 9
 * 
 * Return: Always return 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putcher(n);
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
* main - function that takes a pointer to an int
*
* Return: Always 0
*/
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	_putchar("%d\n", *p);
	
	return (0);
}

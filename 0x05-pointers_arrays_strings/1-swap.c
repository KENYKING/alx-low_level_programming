#include "main.h"
#include <stdio.h>

/**
* swap_int - swap two integers' values
* @a: first integer
* @b: second integer
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

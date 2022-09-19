#include "main.h"
#include <stdio.h>

/**
* rev_string - Reverses a string
* @s: string to be reversed
*
* Return: Always 0
*/
void rev_string(char *s)
{
	int i, tmp, len = _string(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);

		*(s + len - i - 1) = tmp;
	}
}

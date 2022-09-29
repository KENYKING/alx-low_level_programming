#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - calculates the length of a string
* @s: string to be use
*
* Return: length of the spring
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}


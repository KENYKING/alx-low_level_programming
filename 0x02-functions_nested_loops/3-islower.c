#include "main.h"

/**
* _islower - function to check lowercase char
* @c: to be use as the int for the arguement of the function
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

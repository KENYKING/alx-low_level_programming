#include "main.h"

/**
* _abc - function that compute absolute value of an int
* @c: int to be use for arguement of the function
* Return: 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}

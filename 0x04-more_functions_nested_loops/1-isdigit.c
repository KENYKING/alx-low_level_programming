#include "main.h"

/**
 * _isdigit - check whether a character is digit or not
 * @c: teasted character
 * Return: 1 if so, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}

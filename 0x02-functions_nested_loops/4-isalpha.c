#include "main.h"

/**
* _isalpha - function will check if c is a lowercase , uppercase or letter
* @c: int use for the arguement of the function
* Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return(0);
}

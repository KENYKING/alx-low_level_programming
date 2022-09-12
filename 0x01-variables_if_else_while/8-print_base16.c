#include <stdio.h>

/**
* main - Print all number of base 16 in lowercase
*
* Return: Always 0 (success)
*
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

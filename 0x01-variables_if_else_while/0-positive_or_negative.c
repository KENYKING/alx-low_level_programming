#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main- Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	n = 0;

	if (n > 0)
		printf("%d is positive number\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative number\n", n);

	return (0);
}

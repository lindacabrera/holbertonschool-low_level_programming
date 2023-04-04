#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - variable n is positive or negative.
 *
 * Description: this program tells if variable n is positive or negative
 *
 * n: describe the parameter
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("is positive\n");
	}
	else
	{
	if (n < 0)
	{
	printf("is negative\n");
	}
	else
	{
	if (n == 0)
	{
	printf("is zero\n");
	}
	}
	}
	return (0);
}

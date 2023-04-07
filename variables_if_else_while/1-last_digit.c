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
	int l_d = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;
	if (l_d > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	}
	else
	{
		if (l_d < 6 && l_d != 0)
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
		}
		else
		{
		if (l_d  == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, l_d);
		}
		}
	}
	return (0);
}

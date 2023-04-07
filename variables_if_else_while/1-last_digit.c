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

	int last_digit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
		if (last_digit > 5)
		{
		  printf("Last digit of %d is %d and is greater than 5\n", n, last_digit );
		}
		else
		{
			if (last_digit  < 6)
			{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
			}
			else
			{
				if (last_digit  == 0)
				{
				  printf("Last digit of %d is %d and is 0\n", n, last_digit);
				}
			}
		}
	return (0);
}

#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * Description: This program prints the numbers from 1 to 100 ! 3 and 5 x
 *
 * Return: o always
 *
 */

int main(void)
{
	int i;
	int t_m = 0;
	int f_m = 0;

	for (i = 1; i < 101; i++)
	{
		t_m = i % 3;
		f_m = i % 5;

		if (t_m == 0 && f_m == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			if (t_m == 0)
			{
				printf("Fizz");
				printf(" ");
			}
			else
			{
				if (f_m == 0)
				{
					printf("Buzz");
					printf(" ");
				}
				else
				{
					printf("%d", i);
					printf(" ");
				}
			}
		}
	}
	printf("\n");
	return (0);
}

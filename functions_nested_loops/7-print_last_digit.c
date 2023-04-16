#include "main.h"
#include <limits.h>

/**
 * print_last_digit - function
 *
 * Description: this program print the last digit
 *
 * @n: this is the  parameter
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last_d = 0;
	int abs_n = 0;

	last_d = n % 10;

	if (last_d < 0)
	{
		abs_n = last_d * (-1);
		_putchar(abs_n + '0');
		return (abs_n);
	}
	else
	{
		_putchar(last_d + '0');
		return (last_d);
	}
}

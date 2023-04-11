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

	if (n < 0)
	{
		abs_n = n * -1;
		last_d = abs_n % 10;
		_putchar(last_d + '0');
		return (last_d);
	}
	else
	{
		last_d = n % 10;
		_putchar(last_d + '0');
		return (last_d);
	}
}

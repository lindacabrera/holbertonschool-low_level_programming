#include "main.h"
/**
 * print_sign - Sign
 *
 * Description: This function prints the sign of a number
 *
 * @n: is the parameter
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
		_putchar('0');
		return (0);
		}
			else
			{
			_putchar('-');
			return (-1);
			}

	}
}

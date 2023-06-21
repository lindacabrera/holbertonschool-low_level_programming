#include "variadic_functions.h"

/**
 * sum_them_all - Funtion
 *
 * Description: This function returns the sum of all its parameters.
 *
 * @n: number or arguments in the funtion
 *
 * Return: sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	unsigned int i;
	int x = 0;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			s += x;
		}
		va_end(args);
		return (s);
	}
	return (0);
}

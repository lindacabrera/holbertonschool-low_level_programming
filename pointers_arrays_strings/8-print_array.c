#include "main.h"

/**
 * print_array - print array
 *
 * Funtion prints n elements of an array of integers, followed by a new line
 *
 * @a: array name
 *
 * @n: size array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);

		if (i < n - 1)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}

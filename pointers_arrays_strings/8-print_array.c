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

	while (i < (n - 1))
	{
		_putchar(a[i]);
		_putchar(',');
	}
	if (i == n)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - The shortest distance between two points is a straight line
 *
 * Description: This function draws a straight line in the terminal
 *
 * @n: quantity to draw
 *
 */

void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

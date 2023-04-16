#include "main.h"

/**
 * print_triangle - Triangles
 *
 * Description: This function print a triangle, followed by a new line
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = size - i; k >  1; k--)
			{
				_putchar(32);
			}
			for (j = 0; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

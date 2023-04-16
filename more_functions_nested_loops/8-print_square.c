#include "main.h"

/**
 * print_square - You are so much sunshine in every square inch
 *
 * Description: This function prints a square, followed by a new line
 *
 * @size: quantity of # to draw
 *
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

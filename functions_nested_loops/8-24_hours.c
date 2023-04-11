#include "main.h"

/**
 * jack_bauer - function
 *
 * Description: This program print every minute of the day of Jack Bauer
 *
 * a, b: this is the  parameter
 *
 * It prints hours
 */
void jack_bauer(void)
{
	int i = 0, j = 0;
	int a = 0, b = 0;

	for (i = 0; i <= 2; i++)
	{
		for (a = 0; a <= 10; a++)
		{
			if ((i <= 1 && a <= 9) || (i <= 2 && a < 4))
			for (j = 0; j <= 5; j++)
			{
				for (b = 0; b <= 9; b++)
				{
					_putchar(i + '0');
					_putchar(a + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(b + '0');
					_putchar('\n');

				}
			}
		}
	}
}

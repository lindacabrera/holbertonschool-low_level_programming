#include "main.h"

/**
 * times_table - Learn your times table
 *
 * Description: this program print the 9 times table
 *
 * @i, @j: this is the  parameter
 *
 * Return: last digit of n
 */

void times_table(void)
{
	int i = 0, j = 0;
	int num = 0;
	int f_dig = 0;
	int s_dig = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			if (j < 1)
			{
				_putchar(num + 48);
			}
			else
			{
				if (num > 9)
				{
					f_dig = num % 10;
					s_dig = (num - f_dig) / 10;
					_putchar(44);
					_putchar(' ');
					_putchar(s_dig + 48);
					_putchar(f_dig + 48);
				}
				else
				{
					_putchar(44);
					_putchar(' ');
					_putchar(' ');
					_putchar(num + 48);
				}
			}
		}
	_putchar('\n');
	}
}

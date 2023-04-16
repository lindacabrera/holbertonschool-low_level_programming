#include "main.h"

/**
 * more_numbers - Numbers constitute the only universal language
 *
 * Description: This function prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 always
 */

void more_numbers(void)
{
	int n = 0;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}

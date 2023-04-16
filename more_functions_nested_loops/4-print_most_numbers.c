#include "main.h"

/**
 * print_most_numbers - print numbers but 2 or 4
 *
 * Description: This function prints form 0-9 without 2 or 4
 *
 * Return: 1 uppercase 0 lowercase
 */
void print_most_numbers(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
		_putchar(n + 48);
		}
	}
_putchar('\n');
}

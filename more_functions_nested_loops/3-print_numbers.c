#include "main.h"

/**
 * print_numbers - funtion prints numbers
 *
 * Description: This function print number from 0 to 9.
 *
 * Return: 1 uppercase 0 lowercase
 */
void print_numbers(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + 48);
	}
_putchar('\n');
}

#include "main.h"

/**
 * puts_half - print second half
 *
 * This function that prints half of a string, followed by a new line.
 *
 * @str: value of the lenght for the string
 *
 */

void puts_half(char *str)
{
	int a = 0;
	int n = 0;
	int i = 0;

	while (str[a] != '\0')
	{
		a++;
	}
		if (a % 2 == 0)
		{
			n = a / 2;
		}
		else
		{
			n = (a + 1) / 2;
		}

	for (i = n; i < a; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - funtion Half the lies they tell about me aren't true
 *
 * Funtion prints every other character of a string
 *
 * @str: value of the lenght for the string
 *
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}

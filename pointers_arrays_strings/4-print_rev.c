#include "main.h"
/**
 * print_rev - I can only go one way I've not got a reverse gear
 *
 *Description: Function that prints a string, in reverse, followed by a new line
 *
 * @s: Value of the position in array
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a)
	{
	_putchar(s[--a]);
	}
	_putchar('\n');
}

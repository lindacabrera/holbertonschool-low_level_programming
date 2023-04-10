#include "main.h"
/**
 *print_alphabet_x10 - it uses _putchar to print ten times the alphabet
 *
 *Description: Parameter ch is used to print
 *
 * Parameter: ch
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

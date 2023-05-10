#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse
  *
  * Description: This function  prints a string, followed by a new line
  *
  * @s: string to print
  *
  * Return:  Nothing
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

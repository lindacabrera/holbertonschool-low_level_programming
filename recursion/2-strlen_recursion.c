#include "main.h"

/**
  * _strlen_recursion - show length of a string
  *
  * Description: This function returns the length of a string.
  *
  * @s: string to measure
  *
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

#include "main.h"

/**
  * _strcmp - strcmp
  *
  * Description: This function compares two strings
  *
  * @s1: first string
  *
  * @s2 : second string
  *
  * Return: string concatenated.
  */

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

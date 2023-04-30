#include "main.h"

/**
  * _strchr -  function that locates a character in a string
  *
  * Description: This function Returns a pointer to the first occurrence of the
  * character c in the string s, or NULL if the character is not found
  *
  * @s: string to check
  *
  * @c: character to search
  *
  * Return: Pointer to the first occurrence c or null is not c
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}

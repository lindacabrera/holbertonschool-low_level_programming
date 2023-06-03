#include "main.h"
#include <stdlib.h>

/**
  * _strlen - Funtion
  *
  * Description: This function counts the len of string
  *
  * @a: string to count len
  *
  * Return: pointer to a 2 dimensional array of integers or Null if fails
  */

int _strlen(const char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
  * string_nconcat - Funtion
  *
  * Description: This function concatenates two strings
  *
  * @s1: string 1
  * @s2: string 2
  * @n:  bytes of s2 to concatenated
  *
  * Return: pointer to a new concatenated string or  Null if fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x, y;
	char *s;

	i = _strlen(s1);
	j = _strlen(s2);

	if (n >= j)
	{
		n = j;
	}
	s =  malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		return (NULL);

	}
		for (x = 0; x <= i; x++)
		{
			s[x] = s1[x];
		}
		for (y = 0; y <= j; y++)
		{
			s[i + y] = s2[y];
		}
	s[i + j] = '\0';
	return (s);
}

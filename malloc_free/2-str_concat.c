#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
  * str_concat - Funtion
  *
  * Description: This function function that concatenates two strings.
  *
  * @s1: string number 1
  *
  * @s2: string number 2
  *
  * Return: string concatenated
  */

char *str_concat(char *s1, char *s2)
{	int i, j, x, y;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = _strlen(s1);
	j = _strlen(s2);
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
	return (s);
}

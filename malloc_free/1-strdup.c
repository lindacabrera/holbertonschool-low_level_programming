#include "main.h"
#include <stdlib.h>

/**
  * _strdup - funtion _strdup
  *
  * Description: This function returns a pointer to a newly allocated space
  *  in memory , which contains a copy of the string given as a parameter.
  *
  * @str: string to print
  *
  * Return: 1 if string is Null or 0 if returns a pointer for duplicated string
  */
char *_strdup(char *str)
{
	int i = 0;
	char *new_str = NULL;
	char *s = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);
	new_str = s;
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		*new_str = *str;
		str++;
		new_str++;
	}
	return (s);
}

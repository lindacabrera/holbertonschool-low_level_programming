#include "main.h"

/**
  * *string_toupper - Always look up
  *
  * Description: This function that changes all lowercase letters to uppercase.
  *
  * @str: string to change
  *
  * Return: Nothing
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'z' - 'Z';
		}
		i++;
	}
	return (str);
}

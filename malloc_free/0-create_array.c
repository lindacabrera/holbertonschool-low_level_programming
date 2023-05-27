#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
  * create_array - creates an array of chars
  *
  * Description: This function creates an array of chars,
  * and initializes it with a specific char.
  *
  * @size: size if the array
  *
  * @c: char to initializes the array
  *
  * Return: array or NULL if it falls
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

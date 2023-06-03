#include "main.h"
#include <stdlib.h>

/**
  * array_range - funtion
  *
  * Description: This function creates an array of integers
  *
  * @min: minimun value
  *
  * @max: maximun value
  *
  * Return: the pointer to the newly created array
  * Null if min > max or malloc fails
  */

int *array_range(int min, int max)
{
	int *s;
	int i = 0;
	int l = 0;

	l = max - min + 1;
	if (l < 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int) * l);
	if (s  == NULL || min > max)
	{
		free(s);
		return (NULL);
	}
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}

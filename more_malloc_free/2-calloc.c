#include "main.h"
#include <stdlib.h>

/**
  * _calloc - funtion
  *
  * Description: This function allocates memory for an array, using malloc
  *
  * @nmemb: Array to allocated memory
  *
  * @size: bytes to be allocated
  *
  * Return:  returns a pointer to the allocated memory
  * NULL if nmemb or size is 0 or malloc fails
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i, l;

	l = nmemb * size;
	s = malloc(l);
	if (s == NULL || nmemb == 0 || size == 0)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		s[i] = 0;
	}
	return (s);
}

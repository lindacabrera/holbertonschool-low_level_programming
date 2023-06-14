#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Funtion
  *
  * Description: This function fress dog
  *
  * @d:  Dog structure
  *
  * Return: pointer to a 2 dimensional array of integers or Null if fails
  */


void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

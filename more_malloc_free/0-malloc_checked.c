#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Funtion
  *
  * Description: This function  allocates memory using malloc
  *
  * @b: Bytes to allocated
  *
  * Return: 98 if fails, otherwise the pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}

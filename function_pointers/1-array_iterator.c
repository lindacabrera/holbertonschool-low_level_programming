#include "function_pointers.h"

/**
  * array_iterator - funtion
  *
  * Description: This function given as a parameter on each element of an array
  *
  * @array: array to give parameter
  *
  * @size: size of the array
  *
  * @action: A pointer to be executed
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

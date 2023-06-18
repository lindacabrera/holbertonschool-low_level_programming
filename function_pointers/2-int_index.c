#include "function_pointers.h"

/**
  * int_index -  the index of the first element for which the cmp function
  * does not return 0
  *
  * Description: This function searches for an integer
  *
  * @array: where the elements are saved
  *
  * @size: number of elements in the array
  *
  * @cmp: is a pointer to the funtion to be used to compare values
  *
  * Return: (-1) if no elements matches or size <=0
  * or index of the first element for which the cmp function does not return 0
  *
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			return (i);
			i++;
		}
	}
	return (-1);
}

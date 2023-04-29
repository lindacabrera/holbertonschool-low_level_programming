#include "main.h"

/**
  * reverse_array - reverse funtion
  *
  * Description: This function reverses the content of an array of integers
  *
  * @a: string destine
  *
  * @n : bytes for string
  *
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp = 0;

	if (n <= 0)
	{
	}
	else
	{
		for (i = 0; i <= n / 2; i++)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] =  temp;
			j--;
		}
	}
}

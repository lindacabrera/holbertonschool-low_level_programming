#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - The line of life a ragged diagonal between duty and desire
  *
  * Description: This function prints the sum of the two diagonals of a square
  *  matrix of integers.
  *
  * @a: the matrix of integers.
  *
  * @size: size of matrix
  *
  * Return: Pointer to the first occurrence c or null is not c
  */

void print_diagsums(int *a, int size)
{
	int i;
	int dig_r = 0;
	int dig_l = 0;

	for (i = 0; i < size; i++)
	{
		dig_r += *(a + i * size + i);
		dig_l += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", dig_r, dig_l);
}

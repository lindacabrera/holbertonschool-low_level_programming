#include "main.h"

/**
 * swap_int - Don't swap horses in crossing a stream
 *
 * Description: this function that swaps the values of two integers
 *
 * @*a: first Parameter
 * @*b: Second parameter
 *
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}

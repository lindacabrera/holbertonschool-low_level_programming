#include "main.h"

/**
  * factorial - the factorial of a number
  *
  * Description: This function returns the factorial of a given number.
  *
  * @n: Number to get factorial
  *
  * Return: factorial of number
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	} else
		return (n * factorial(n - 1));
}

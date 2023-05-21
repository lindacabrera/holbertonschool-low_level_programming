#include "main.h"

int _sqrt(int n, int i);

/**
  * _sqrt_recursion -  the natural square of a number
  *
  * Description: This function returns the natural square root of a number.
  *
  * @n: number to get root
  *
  * Return: value of root
  */

int _sqrt_recursion(int n)
{
	return ( _sqrt(n, 0));
}

/**
  * _sqrt - recursion of a number
  *
  * Description: This function calculate a sqr of a number recursively
  *
  * @n: number to canculate sqr
  *
  * @i: number to iterate
  *
  * Return: value of root
  */
int _sqrt(int n, int i)
{

	if (n < 0)
	{
		return (-1);
	} else if (i * i == n)
	{
		return (i);
	} else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}

#include "main.h"

int checker_prime(int n, int i);

/**
  * is_prime_number - looks for prime number
  *
  * Description: This function  returns 1 if the input integer
  * is a prime number, otherwise return 0.
  *
  * @n: Number to check
  *
  * Return: 1 if prime otherwise 0
  */
int is_prime_number(int n)
{
	return (checker_prime(n, 1));
}

/**
  * checker_prime - check if n is prime recursively
  *
  * Description: This function returns 1 if n is prime
  *
  * @n: Number to check
  *
  * @i: recursive value
  *
  * Return: check if prime
  */

int checker_prime(int n, int i)
{

	if (n <= 1)
	{
		return (0);
	} else if (n % i == 0 && i > 1)
	{
		return (0);
	} else if ((n / i) < i)
	{
		return (1);
	}
	return (checker_prime(n, i + 1));
}

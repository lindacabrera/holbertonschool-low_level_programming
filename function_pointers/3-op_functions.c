#include "3-calc.h"
 #include <stdlib.h>
 #include <stdio.h>

/**
  * op_add - funtion
  *
  * Description: This function add two numbers
  *
  * @a: Fist number
  *
  * @b: Second number
  *
  * Return: result
  *
  */

int op_add(int a, int b)
{
	return (a + b);
}



/**
  * op_sub - funtion
  *
  * Description: This function subtracs two numbers
  *
  * @a: Fist number
  *
  * @b: Second number
  *
  * Return: result
  *
  */

int op_sub(int a, int b)
{
	return (a - b);
}



/**
  * op_mul - funtion
  * Description: This function multiplies two numbers
  *
  * @a: Fist number
  *
  * @b: Second number
  *
  * Return: result
  */

int op_mul(int a, int b)
{
	return (a * b);
}



/**
  * op_div - funtion
  *
  * Description: This function divides two numbers
  *
  * @a: Fist number
  *
  * @b: Second number
  *
  * Return: result
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}



/**
 * op_mod - funtion
 *
 * Description: This function calculates the module of two numbers
 *
 * @a: Fist number
 *
 * @b: Second number
 *
 * Return: result
 *
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

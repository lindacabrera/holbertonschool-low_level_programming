#include "main.h"

/**
 * _isdigit - Function checks for digit
 *
 * Description: This function that checks for digit
 *
 * @c: this is the  parameter
 *
 * Return: 1 digit  0 not digit
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isupper - Function checks uppercase
 *
 * Description: This function that checks for uppercase character.
 *
 * @c: this is the  parameter
 *
 * Return: 1 uppercase 0 lowercase
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

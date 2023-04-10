#include "main.h"
/**
 * _islower - look slowercase
 *
 * Description: function  return 1 if lowercase 0 otherwise
 *
 * @c: Parameter provide a value to check
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
		{
		return (0);
		}
}

#include "main.h"

/**
 * _atoi - sacrifice the numbersq
 *
 * Description: funtion convert a string to an integer
 *
 * @s: string to be converted
 *
 * return: integer dig * sign
 *
 */


int _atoi(char *s)
{
	unsigned int dig = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (dig == 0)
		{
			if (*s == ' ')
			{
			}
			else if (*s == '-')
			{
				sign *= -1;
			}
			else if (*s == '+')
			{
				 sign *= 1;
			}
			else if (*s >= '0' && *s <= '9')
			{
				dig = dig * 10 + (*s - '0');
			}
		}
		else if (dig != 0)
		{
			if (*s >= '0' && *s <= '9')
			{
				dig = dig * 10 + (*s - '0');
			}
			else if (*s < '0' || *s > '9')
			{
				break;
			}
		}
		s++;
	}
	return (dig * sign);
}

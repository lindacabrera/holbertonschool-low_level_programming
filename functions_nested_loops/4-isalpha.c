#include "main.h"
/**
 *_isalpha - alphabetic caracter
 *
 *Description: This function look for alphabetic caracter
 *
 * Parameter: c
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
		else
		{
		return (0);
		}
}

#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  *
  * Description: This function Returns the number of bytes in the initial
  * segment of s which consist only of bytes from accept
  *
  * @s: string to check
  *
  * @accept: prefix to be masured
  *
  * Return: quantity of bytes
  *
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int bytes = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s[j] != 32; j++)
		{
			if (s[j] == accept[i])
			{
				bytes += 1;
			}
		}
	}
	return (bytes);
}

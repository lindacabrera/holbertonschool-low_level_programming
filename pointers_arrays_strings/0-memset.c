#include "main.h"

/**
  * _memset - memset
  *
  * Description: This function fills memory with a constant byte
  *
  * @s: space memory to fill
  *
  * @b: constante byte b
  *
  * @n: quantity of bytes of memory
  *
  * Return: the memory filled
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);

}

#include "main.h"

/**
  * _memcpy - function that copies memory area
  *
  * Description: This function copies n bytes from src to dest
  *
  * @src: where bytes to copy are stored
  *
  * @dest: where bytes will be saved
  *
  * @n: quantity of bytes to copy
  *
  * Return: Nothing
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

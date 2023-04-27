#include "main.h"

/**
  * *_strncat - strncat
  *
  * Description: This function concatenates two strings
  *
  * @dest: string destine
  *
  * @src : string to appends
  *
  * @n : bytes for string
  *
  * Return: string concatenated.
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

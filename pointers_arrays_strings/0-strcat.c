#include "main.h"
/**
 * *_strcat - 0. strcat
  *
  * Description: This function concatenates two strings
  *
  * @dest: string destine
  *
  * @src : string to appends
  *
  * Return: length of a string.
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

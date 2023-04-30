#include "main.h"

/**
  * _strstr - function that locates a substring
  *
  * Description: function finds the first occurrence of the substring needle in
  * the string haystack. The terminating null bytes (\0) are not compared
  *
  * @haystack: string to check
  *
  * @needle: character to search
  *
  * Return: Pointer to the first occurrence c or null is not c
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		i++;
		}
	return (0);
}

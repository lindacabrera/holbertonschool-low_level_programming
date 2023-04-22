#include "main.h"
/**
 * rev_string - funtion prints in reverse
 *
 * Description: This function that reverses a string
 *
 * @s:,string to reverse
 *
 */

void rev_string(char *s)
{
	int a = 0;
	int i = 0;
	int j;
	char temp;

	while (s[a] != '\0')
	{
		a++;
	}
	j = a - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

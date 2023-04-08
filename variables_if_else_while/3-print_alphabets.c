#include <stdio.h>

/**
 *main - Alphabeth lowercase uppercase
 *
 *Description: Alphabeth
 *
 *Parameter: ch
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);
}

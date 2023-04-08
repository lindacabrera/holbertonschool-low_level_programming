#include <stdio.h>
/**
 * main - I sometimes suffer from insomnia.
 *
 * Description: I never thought that it would pay off
 *
 * Parameter: ch
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		}
	putchar('\n');
return (0);
}


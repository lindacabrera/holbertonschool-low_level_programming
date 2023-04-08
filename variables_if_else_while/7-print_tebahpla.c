#include <stdio.h>

/**
 * main - Smile in the mirror.
 *
 * Description: This program prints the lowercase alphabet in reverse
 *
 * Parameter: ch
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
		for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
return (0);
}

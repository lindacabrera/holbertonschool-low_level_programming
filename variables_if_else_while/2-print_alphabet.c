#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - I sometimes suffer from insomnia.
 *
 * Description: If can't fall asleep, I play what I call the alphabet game
 *
 * n: describe the parameter
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

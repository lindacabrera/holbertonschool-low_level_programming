#include <stdio.h>
/**
 * main -Patience, persistence and perspiration combination for success
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Parameter: i
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		putchar(i + '0');
		putchar(j + '0');
		putchar(',');
		}
	}
putchar('\n');
return (0);
}


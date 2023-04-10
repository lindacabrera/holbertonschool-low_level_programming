#include "main.h"

/**
 * main -Print
 *
 * Description: this program print using putchar
 *
 * Parameter: c
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;

	while (c[i] != '\0')
	{
	_putchar(c[i]);
		i++;
	}
return (0);
}

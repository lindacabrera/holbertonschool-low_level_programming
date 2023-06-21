#include "variadic_functions.h"

/**
 * print_strings - Funtion
 *
 * Description: This function returns prints strings, followed by a new line
 *
 * @separator: string to be printed between numbers
 *
 * @n: number or arguments in the funtion
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("%s", "(nil)");
		}
		printf("%s", str);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		va_end(args);
	}
	putchar('\n');
}

#include "variadic_functions.h"

/**
 * print_all - Funtion
 *
 * Description: This function prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * @n: number or arguments in the funtion
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *separator = " ";

	va_start(args, format);

	form_t form_type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_ptr},
	};

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		va_end(args);
	}
	putchar('\n');
}

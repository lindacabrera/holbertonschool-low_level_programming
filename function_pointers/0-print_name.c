#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - Funtion
  *
  * Description: This function  prints a name
  *
  * @name: Name to print
  *
  * @f: A pointer to a function that prints a name
  *
  * Return: Nothing
  */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

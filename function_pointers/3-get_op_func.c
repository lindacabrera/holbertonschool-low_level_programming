#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * get_op_func - funtion
  *
  * Description: This function  selects the correct function to perform
  * the operation asked by the user
  *
  * @s: opetaror passed as argument to the program
  *
  * Return: Pointer to the functionto the operator given as a parameter
  * 0 if fails
  *
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && s[1] == ops[i].op[1])
		{

			break;
		}
		i++;
	}
	return (ops[i].f);
}

 #include "3-calc.h"
 #include <stdlib.h>
 #include <stdio.h>

/**
  * main - funtion
  *
  * Description: This function checks operation)
  *
  * @argc: number of arguments in operation funtion
  *
  * @argv: argumentos in operation funtion
  *
  * Return: result
  *
  */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int a, b;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}

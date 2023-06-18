 #include "3-calc.h"
 #include <stdlib.h>
 #include <stdio.h>

/**
  *
  *
  * Description: This function
  *
  * @a: Fist number
  *
  * @b: Second number
  *
  * Return: result
  *
  */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int a, b;

	/*int i = 0;
	printf("The number of command-line arguments is: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
        printf("Argument %d: %s\n", i, argv[i]);
	}*/

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
	return(0);
}

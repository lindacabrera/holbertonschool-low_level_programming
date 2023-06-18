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
	int i = 0;

	printf("The number of command-line arguments is: %d\n", argc);

	for (i = 0; i < argc; i++)
	{
        printf("Argument %d: %s\n", i, argv[i]);
	}
	operation = 3-op_functions(argv[2]);
	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return(0);
}

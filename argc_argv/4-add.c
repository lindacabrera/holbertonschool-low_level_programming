#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - name funtion
  *
  * Description: This program prints the sum of the numbers.
  *
  * @argc: Number of arguments
  *
  * @argv: Array of arguments beggining with its name
  *
  * Return: 0 if success
  */

int main(int argc, char *argv[])
{
	int j;
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		if (argc == 1)
		{
			return (0);
		} else if (!isdigit(*argv[j]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - name funtion
  *
  * Description: This program prints its name, followed by a new line.
  *
  * @argc: Number of arguments
  *
  * @argv: Array of arguments beggining with its name
  *
  * Return: 0 if success
  */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	} else
	{
		printf("error\n");
	}
	return (0);
}

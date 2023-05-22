#include <stdio.h>

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
	(void) argv;

	printf("%d\n", (argc - 1));

	return (0);
}

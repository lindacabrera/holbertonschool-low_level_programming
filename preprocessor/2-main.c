#include <stdlib.h>
#include <stdio.h>

/**
  * main - program
  *
  * Description: This program prints the name of the file it was
  * compiled from, followed by a new line.
  *
  * Return:  returns a pointer to the allocated memory
  */
int main(void)
{
	printf("%s\n", __FILE__);
	exit(0);
}

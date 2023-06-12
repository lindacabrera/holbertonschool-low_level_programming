#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - Funtion
  *
  * Description: This function that prints a struct dog
  *
  * @d: Dog structure
  *
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf(d->age ? "Age: %f\n" : "nil", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

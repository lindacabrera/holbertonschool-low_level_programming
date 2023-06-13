#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
  * _strlen - Funtion
  *
  * Description: This function counts the len of string
  *
  * @a: string to count len
  *
  * Return: pointer to a 2 dimensional array of integers or Null if fails
  */

int _strlen(const char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
  * new_dog - Funtion
  *
  * Description: This function creates a new dog.
  *
  * @name: name of dog
  *
  * @age: Age of dog
  *
  * @owner: Owner of dog
  *
  * Return: struct dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *i_dog;

	i_dog = malloc(sizeof(i_dog));
	if (i_dog == NULL || !(name) || !(owner))
	{
		free(i_dog);
		free(i_dog->name);
		free(i_dog->owner);
		return (NULL);
	}
	{
		i_dog->name = malloc(sizeof(char) * ((_strlen(name)) + 1));
		i_dog->owner = malloc((sizeof(char) * ((_strlen(owner)) + 1)));

		strcpy(i_dog->name, name);
		i_dog->age = age;
		strcpy(i_dog->owner, owner);

	}
	return (i_dog);

}

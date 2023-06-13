#include "dog.h"
#include <stdlib.h>


/**
 * _strcpy - copies the string pointed on scr and save on dest
 *
 * this function copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 *
 * @src: parametres that provides the string
 *
 * @dest: paramter to storaged the string
 *
 * Return: string saved on dest.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

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
	dog_t *n_dog;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		free(n_dog->name);
		free(n_dog->owner);
		return (NULL);
	}
	{
		n_dog->name = malloc(_strlen(name) + 1);
		n_dog->owner = malloc(_strlen(owner) + 1);

		_strcpy(n_dog->name, name);
		n_dog->age = age;
		_strcpy(n_dog->owner, owner);

	}
	return (n_dog);

}

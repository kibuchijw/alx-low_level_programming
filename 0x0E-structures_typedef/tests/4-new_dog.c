#include "dog.h"
#include <stdlib.h>
/**
  * _strlen - Gives string length
  * @s: String to check for length
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

/**
  * _strcpy - Copies a string
  * @dest: Destination of copied string
  * @src: Source of copied string
  *
  * Return: Destination pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
/**
  * new_dog - Creates a new dog
  * @name: New dog name
  * @age: New dog age
  * @owner: New dog owner
  *
  * Return: NULL if function fails, else return new dog details
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fresh_dog;
	int name_temp = 0, owner_temp = 0;

	if (name != NULL && owner != NULL)
	{
		name_temp = _strlen(name) + 1;
		owner_temp = _strlen(owner) + 1;
		fresh_dog = malloc(sizeof(dog_t));

		if (fresh_dog == NULL)
			return (NULL);

		fresh_dog->name = malloc(sizeof(char) * name_temp);

		if (fresh_dog->name == NULL)
		{
			free(fresh_dog);
			return (NULL);
		}

		fresh_dog->owner = malloc(sizeof(char) * owner_temp);

		if (fresh_dog->owner == NULL)
		{
			free(fresh_dog->name);
			free(fresh_dog);
			return (NULL);
		}

		fresh_dog->name = _strcpy(fresh_dog->name, name);
		fresh_dog->owner = _strcpy(fresh_dog->owner, owner);
		fresh_dog->age = age;
	}
	return (fresh_dog);
}

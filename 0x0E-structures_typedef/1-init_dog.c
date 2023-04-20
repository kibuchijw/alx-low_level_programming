#include "dog.h"
#include <stdio.h>

/**
  * init_dog - Dog structure initialization
  * @d: Dog structure
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  *
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


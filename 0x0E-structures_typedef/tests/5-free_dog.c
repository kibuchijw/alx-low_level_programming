#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Frees memory alocated to the new dog
  * @d: Dog to be freed
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

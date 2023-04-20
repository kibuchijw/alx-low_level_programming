#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Elements  of the dog
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  *
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

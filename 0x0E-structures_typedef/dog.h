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
/**
  * dog_t - New name for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

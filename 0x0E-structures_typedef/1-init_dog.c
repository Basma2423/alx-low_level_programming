#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a dog
 *
 * @d: struct
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * description: same
 *
 * return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

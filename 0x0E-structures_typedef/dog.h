#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 *
 * @name: first member
 * @age: sec member
 * @owner: third member
 *
 * description: doooog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

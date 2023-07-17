#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  variable of type struct dog is initialized
 * @d: initializes a pointer to struct dog
 * @name: it initializes the name of the dog
 * @age: it initializes the age of the dog
 * @owner: it initializes the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->owner = owner;
	d->age = age;
	d->name = name;
}

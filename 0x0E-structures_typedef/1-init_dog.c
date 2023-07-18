#include "dog.h"
/**
 * init_dog - init dog struct
 * @d: dog struct
 * @name: name of the d
 * @age: age of the dog
 * @owner: name of the owner
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


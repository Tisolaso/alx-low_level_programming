#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - check the code
 * @d: emmm
 * @name: emmm
 * @age: emmm
 * @owner: emmm
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

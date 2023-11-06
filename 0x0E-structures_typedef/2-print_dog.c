#include <stdio.h>
#include "dog.h"
/**
  * print_dog - prints the dog struct
  * @d: pointer to the dog struct
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

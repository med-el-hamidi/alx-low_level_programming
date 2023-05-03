#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer to the dog to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

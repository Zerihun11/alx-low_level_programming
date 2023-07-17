#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free
 * @d: pointer to dog stuct in memory.
 *
 * Return: Alway 0
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

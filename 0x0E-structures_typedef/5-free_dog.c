#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs
 * @d: pointer to dog struct
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->name);
	free(d->owner);
	free(d)
}

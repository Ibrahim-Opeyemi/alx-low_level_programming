#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: The pointer to dog to free
 *
 * Description: This frees a dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

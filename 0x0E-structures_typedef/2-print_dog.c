#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: The pointer to struct dog
 * Description: prints a struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}

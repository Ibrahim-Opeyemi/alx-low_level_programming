#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: pointer to new dog, or NULL if the function fails
 * Description: creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		return (NULL);
	}
	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

/**
 * _strlen - a function that returns the length of a string
 * @s: The string to check the length
 *
 * Return: The length of string
 *
 * Description: This returns the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - a function that copies a string to a buffer.
 * @dest: The buffer to copy string to
 * @src: The string to copy to buffer
 * Return: The pointer to buffer
 * Description: This copies a string to a buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - Makes a copy of a string in newly allocated memory
 * @src: The string to copy, which may be NULL
 *
 * Return: A pointer to the copy, or NULL if src is NULL or malloc fails
 */
static char *copy_string(char *src)
{
	char *copy;
	unsigned int len;
	unsigned int i;

	if (src == NULL)
		return (NULL);

	len = 0;
	while (src[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		copy[i] = src[i];
		i++;
	}

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog, which is copied
 * @age: The age of the dog
 * @owner: The owner of the dog, which is copied
 *
 * Return: A pointer to the new dog, or NULL if an allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = copy_string(name);
	if (name != NULL && dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = copy_string(owner);
	if (owner != NULL && dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	size_t total;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = (size_t)nmemb * size;

	array = malloc(total);
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < total)
	{
		array[i] = 0;
		i++;
	}

	return (array);
}

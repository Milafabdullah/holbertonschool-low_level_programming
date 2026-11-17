#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates zeroed memory for an array
 * @nmemb: The number of elements
 * @size: The size in bytes of each element
 *
 * Return: A pointer to the memory, or NULL if nmemb or size is 0, if the
 * total size overflows, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	if (total / size != nmemb)
		return (NULL);

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}

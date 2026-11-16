#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated copy of a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicate, or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[len] = '\0';

	return (copy);
}

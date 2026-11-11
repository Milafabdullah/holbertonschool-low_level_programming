#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	if (needle[0] == '\0')
		return (haystack);

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;

		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}

	return (NULL);
}

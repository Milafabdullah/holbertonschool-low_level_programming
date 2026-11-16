#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into newly allocated memory
 * @s1: The first string, treated as empty if NULL
 * @s2: The second string, treated as empty if NULL
 *
 * Return: A pointer to the new string, or NULL if malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len2)
	{
		result[len1 + i] = s2[i];
		i++;
	}

	return (result);
}

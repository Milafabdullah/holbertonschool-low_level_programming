#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any byte in another string
 * @s: The string to search
 * @accept: The characters to look for
 *
 * Return: A pointer to the first matching character, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}

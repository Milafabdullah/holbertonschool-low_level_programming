#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to accept
 *
 * Return: The number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;

		if (accept[j] == '\0')
			return (count);

		count++;
		i++;
	}

	return (count);
}

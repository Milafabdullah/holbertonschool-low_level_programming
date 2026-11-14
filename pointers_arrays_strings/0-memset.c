#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The constant byte to write
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
		len++;

	i = len / 2;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

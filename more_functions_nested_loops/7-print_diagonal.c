#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line;
	int space;

	if (n <= 0)
		_putchar('\n');

	line = 0;
	while (line < n)
	{
		space = 0;
		while (space < line)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		line++;
	}
}

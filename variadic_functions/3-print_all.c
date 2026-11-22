#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char
 * @args: pointer to the list of arguments
 *
 * Return: Nothing.
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an integer
 * @args: pointer to the list of arguments
 *
 * Return: Nothing.
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - prints a float
 * @args: pointer to the list of arguments
 *
 * Return: Nothing.
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string, or (nil) if it is NULL
 * @args: pointer to the list of arguments
 *
 * Return: Nothing.
 */
void print_string(va_list *args)
{
	char *str;

	str = va_arg(*args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: list of the types of the arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *sep;
	printer_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	sep = "";
	i = 0;
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (ops[j].c != '\0')
		{
			if (format[i] == ops[j].c)
			{
				printf("%s", sep);
				ops[j].f(&args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

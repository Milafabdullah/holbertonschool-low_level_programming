#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check_num - checks that a string contains only digits
 * @str: string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_num(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if an argument is not a number
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

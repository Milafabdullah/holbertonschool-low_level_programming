#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted number, or 0 if the string has no digits
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int digit;

	i = 0;
	sign = 1;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	result = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (result < (INT_MIN + digit) / 10)
			return (sign == 1 ? INT_MAX : INT_MIN);
		result = result * 10 - digit;
		i++;
	}

	if (sign == 1)
	{
		if (result == INT_MIN)
			return (INT_MAX);
		return (-result);
	}

	return (result);
}

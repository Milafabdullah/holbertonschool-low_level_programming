#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array containing values from min to max
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: Pointer to the new array, or NULL
 */
int *array_range(int min, int max)
{
	int *array;
	size_t count;
	size_t i;
	long value;

	if (min > max)
		return (NULL);

	count = (size_t)((long)max - (long)min + 1);

	if (count > (size_t)-1 / sizeof(int))
		return (NULL);

	array = malloc(sizeof(int) * count);
	if (array == NULL)
		return (NULL);

	value = min;
	i = 0;

	while (i < count)
	{
		array[i] = (int)value;
		value++;
		i++;
	}

	return (array);
}

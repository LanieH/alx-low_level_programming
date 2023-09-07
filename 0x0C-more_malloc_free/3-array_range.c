#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates ann array of integers
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * min > max, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *arr, i;
	int j = 0;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	arr = malloc(n * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}

#include <stdlib.h>
#include "main.h"

/**
 * *array_ranga - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
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

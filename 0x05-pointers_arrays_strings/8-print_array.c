#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: number of element of the array to be printed
 * @a: String input
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the 2 diagonals in a square matrix
 * @a: matrix arg
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int diagsum1 = 0;
	int diagsum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diagsum1 = diagsum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		diagsum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}

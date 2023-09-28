#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * between two numbers.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	for (i = 0; i < 64; i++)
	{
		if ((exclusive >> i) & 1)
			count++;
	}

	return (count);
}

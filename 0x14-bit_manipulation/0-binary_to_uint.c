#include "main.h"

/**
 * binary_to_unit - Converts a binary number to unsignedi int.
 * @b: A string that contains binary number
 *
 * Return: Converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}


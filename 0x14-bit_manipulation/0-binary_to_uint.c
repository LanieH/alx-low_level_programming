#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - Converts a binary number to unsignedi int.
 * @b: A string that contains binary number
 *
 * Return: Converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);
}

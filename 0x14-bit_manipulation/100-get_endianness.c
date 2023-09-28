#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num = 1;
	char *endianCheck = (char *)&num;

	return (*endianCheck == 1);
}

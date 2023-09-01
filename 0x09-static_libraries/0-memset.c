#include "main.h"

/**
 * _memset - fills a block of memory with a contant byte
 * @s: starting address of memory to be filled
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int bytes = n;

	if (bytes > 0)
	{
		int i;

		for (i = 0; i < bytes; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}

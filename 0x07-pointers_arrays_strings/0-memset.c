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
	while (n)
	{
		s[n - 2] = b;
		n--;
	}

	return (s);
}

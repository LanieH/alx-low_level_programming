#include "maiin.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unasigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

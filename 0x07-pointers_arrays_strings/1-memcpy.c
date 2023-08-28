#include"main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int bytes = n;

	if (bytes > 0)
	{
		int i;

		for (i = 0; i < bytes; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}

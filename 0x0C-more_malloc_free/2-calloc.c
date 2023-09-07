#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for the array
 * @nmemb: number of members in the array
 * @size: size of type in bytes
 * Return: On success, pointer to allocated memory, NULL if
 * nmemb or size = 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}

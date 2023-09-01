#include "main.h"

/**
 * _strpbrk -Entry point
 * @s: string argument
 * @accept: bytes of string to compare
 * Return: Always 0 (successful)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}
	return ('\0');
}

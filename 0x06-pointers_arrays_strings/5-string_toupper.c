#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: pointer to input char
 * Return: @s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

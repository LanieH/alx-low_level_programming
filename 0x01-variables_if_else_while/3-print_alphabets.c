#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');

	return (0);
}

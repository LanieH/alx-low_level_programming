#include <stdio.h>
/**
 * main - program that prints the size of various computer types it is compiled and run on
 * Return 0 (successful)
 */
int main(void)
{
	char c;
	int d;
	long int e;
	long long  int f;
	float g;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));
return (0);
}

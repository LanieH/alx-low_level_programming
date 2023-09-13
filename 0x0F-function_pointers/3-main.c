#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs calc operation on any two given integers
 * @argc: number of args
 * @argv: args array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

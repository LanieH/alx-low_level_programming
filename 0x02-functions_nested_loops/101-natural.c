#include <stdio.h>
/**
 * main - Print the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int num;
	int sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}

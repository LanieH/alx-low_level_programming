#include "main.h"

/**
 * get_prime - finds if a number is prime or not
 * @n: number to evaluate
 * @test: test divisors
 * Return: 1 if n is a prime number, 0 otherwise
 */
int get_prime(int n, int test)
{
	if (n <= 1 || n % test == 0)
	{
		return (0);
	}

	if (n == test)
	{
		return (1);
	}

	if (n > test)
	{
		get_prime(n, test + 1);
	}
	return (1);
}

/**
 * is_prime_number - returns the status of a number
 * @n: number
 * Return: '1' if prime, '0' otherwise
 */
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}

#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */
int main(void)
{
		long number = 612852475143;
		long largest_prime = 0;
		long i;

	/* Divide number by 2 until it is odd */
	while (number % 2 == 0)
	{
		largest_prime = 2;
		number /= 2;
	}

	/* Check for odd factors starting from 3 */
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_prime = i;
			number /= i;
		}
	}

	/* If number is still greater than 2, it is prime */
	if (number > 2)
	{
		largest_prime = number;
	}

	printf("%ld\n", largest_prime);

	return (0);
}


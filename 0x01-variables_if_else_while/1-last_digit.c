#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main Function
 * Description: The main function the last digit of n will be printed
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * if the last digit of n is greater than 5
	 * if the last digit of n is 0
	 * if the last digit of n is less than 6 and not 0
	 */


	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}

	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);
}

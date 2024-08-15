#include <stdio.h>

/**
 * computes and prints the sum of all the 
 * multiples of 3 or 5 below 1024
 * main - Main Function
 * Return: always 0
 */
 
int main (void)
{
	int n;
	int add = 0;

	for (n = 0; n < 10; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			add += n;
	}
	return add;
}

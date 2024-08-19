#include <stdio.h>

/**
 * main - main function
 * 
 * Description: print 50 fibonaci numbers
 *
 * Return: always (0) success
 *
 */

int main(void)
{
	int x;
	unsigned long a = 0;
	unsigned long b = 1;

	for (x = 1; x <= 50; x++)
	{

	unsigned long fibo = a + b;

		printf("%lu, ", fibo);

		a = b;
		b = fibo;
	}

	return (0);
}

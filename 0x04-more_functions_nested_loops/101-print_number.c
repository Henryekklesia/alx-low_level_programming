#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 *
 * Description: This function handles both positive and negative integers.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* Make n positive */
	}

	if (n / 10)
	{
		print_number(n / 10); /* Recursive call for the next digit */
	}

	_putchar((n % 10) + '0'); /* Print the last digit */
}

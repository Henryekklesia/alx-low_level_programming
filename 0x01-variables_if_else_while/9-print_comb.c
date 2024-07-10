#include <stdio.h>
/**
 * main - main function o the code
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n = 0;
	int m = 1;

	while (n < 10)
	{
		if (n != m)
		{
			putchar(n + 48); /* Convert n to its ASCII character */
			putchar(',');
			putchar(' ');
			putchar(m + 48); /* Convert m to its ASCII character */
		}
	n++;
	m++;
	}

return (0);

}


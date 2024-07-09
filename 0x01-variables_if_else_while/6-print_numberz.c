#include <stdio.h>

/**
 * main - Main function
 * Return: always 0 (success)
 */

int main(void)
{

	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');

return (0);

}

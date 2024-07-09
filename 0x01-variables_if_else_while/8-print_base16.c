#include <stdio.h>

/**
 * main - Main function
 * Return: always 0 (success)
 */

int main(void)
{

	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

return (0);

}

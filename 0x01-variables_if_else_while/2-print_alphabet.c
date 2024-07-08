#include <stdio.h>

/**
 * main - This is the main function
 * Return: always 0 (success)
 */

int main(void)
{

	char x = 'a';

	do {
		putchar(x);
		x++;

	} while (x <= 'z');

	putchar('\n');

return (0);
}

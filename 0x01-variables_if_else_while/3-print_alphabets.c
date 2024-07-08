#include <stdio.h>

/**
 * main - main Funtion goes here
 * display alphABET
 * Return: always 0 (success)
 */

int main(void)
{

	char x = 'a';
	char Y = 'A';

	do {
		putchar(x);
		x++;
	} while (x <= 'z');

	do {
		putchar(Y);
		Y++;
	} while (Y <= 'Z');

	putchar('\n');

return (0);

}


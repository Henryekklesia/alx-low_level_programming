#include <stdio.h>
/**
 * main - Main funtion of this operation
 * Description: Writing a-z without q and e
 * Return: always 0 (success)
 */

int main(void)
{

	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
		putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

return (0);

}

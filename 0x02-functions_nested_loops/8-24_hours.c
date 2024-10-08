#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: Prints all time combinations from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			/* Special case: Hours 2x and Minutes greater than 59 */
			if (a == '2' && b > '3')
				break;

			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}

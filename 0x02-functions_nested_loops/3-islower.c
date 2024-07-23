#include "main.h"

/**
 * int _islower - function for this prototype
 * @c: the parameter of integer type
 * Return: 1 for lowercase letters, 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

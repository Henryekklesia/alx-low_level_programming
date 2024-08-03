#include "main.h"
/**
 * _abs(int) - computes the absolute value of an integer
 * @n: Character to find absolute value
 * Return: returns (-n, 0 and n)
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n == 0)
		return (0);
	else
		return (n);
}

#include "main.h"

/**
 * _isalpha - main function of the protoptye
 * @c: parameter of integer type
 * Return: returns (1) if c is upper or lowercase, (0) otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

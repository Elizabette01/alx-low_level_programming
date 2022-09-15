#include "main.h"
/**
 * _isdigit - Checks for a digit (0 - 9).
 * @c: The argument used in the parameter
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

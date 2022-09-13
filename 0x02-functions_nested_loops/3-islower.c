#include "main.h"
/**
 * _islower - a function that checks for lower case character
 * returns 1 if c is lowercase and 0 otherwise
 * @c: is the parameter for the function
 *
 * Return: 0
 * **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

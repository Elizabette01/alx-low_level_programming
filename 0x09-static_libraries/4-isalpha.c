#include "main.h"
/**
 * _isalpha - function to check if c is an alphabetic character
 * @c: the argument used in the parameter
 *
 * Return: 0
 * **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

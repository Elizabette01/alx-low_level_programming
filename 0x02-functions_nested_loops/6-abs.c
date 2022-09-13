#include "main.h"
/**
 * _abs - functions that computes the absolute value of an integer
 * @c: the argument of the parameter
 * Return: 0
 * **/
int _abs(int c)
{
	if ((c > 0) || (c == 0))
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}

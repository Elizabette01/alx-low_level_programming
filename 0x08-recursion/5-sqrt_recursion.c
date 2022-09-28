#include "main.h"
/**
 * _sqrt - checks that the squareroot of a number exist
 * @num: number
 * @s: possible square root of number
 * Return: sqrt of number, -1 for error
 */
int _sqrt(int num, int s)
{
	if ((s * s) == num)
	{
		return (s);
	}
	else
	{
		if ((s * s) > num)
			return (-1);
		else
			return (_sqrt(num, s + 1));
	}
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to find squareroot of
 * Return: Sqrt of n, -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}

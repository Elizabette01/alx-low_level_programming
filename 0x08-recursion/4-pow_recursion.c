#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to power of y
 * @x: number given
 * @y: the power the number is raised to
 * Return: x to the power of y, -1 if x < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}

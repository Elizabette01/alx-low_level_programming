#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 * NULL if min > max || if malloc fails
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(sizeof(int) * range);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + 1;
	}
	return (p);
}

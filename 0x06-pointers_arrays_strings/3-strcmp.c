#include "main.h"
/**
 * _strcmp - A function that compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: Int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, r = 0, lim;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i <= j)
	{
		lim = i;
	}
	else
	{
		lim = j;
	}
	while (k <= lim)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			r = s1[k] - s2[k];
			break;
		}
		k++;
	}
	return (r);
}

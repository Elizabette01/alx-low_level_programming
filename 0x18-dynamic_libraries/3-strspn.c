#include "main.h"
/**
 * _strspn - funtion that gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: String containing the characters to match
 * Return: length of the segement
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}

		if (*(accept + i) == '\0')
			break;
	}

	return (j);
}

#include "main.h"
/**
 * _strchr - a function that locates a charactr in a string
 * @s: The string to be scanned
 * @c: the character to be searched in s
 * Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}

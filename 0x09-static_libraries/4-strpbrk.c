#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: String to be scanned
 * @accept:string containing the characters to match
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}

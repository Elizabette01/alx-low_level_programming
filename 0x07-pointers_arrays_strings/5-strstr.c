#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: the pointer to a string to be scanned
 * @needle: the pointer to a string containing the characters to match
 * Return: Pointer to the located string
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}

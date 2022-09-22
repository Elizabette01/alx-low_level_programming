#include "main.h"
/**
 * cap_string - Function that capitalize first character of a word
 * @str: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int len = 13;
	int a = 0, i;
	char sep[] = {32, '\t', '\n', ',', ';', '.', '!',
	       '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || str[a - 1] == sep[i]) &&
						(str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;
			i++;
		}
		a++;
	}
	return (str);
}

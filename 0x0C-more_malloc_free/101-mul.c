#include "main.h"
/**
 * find_len - finds length of a string
 * @str: string to be measured
 * Return: length of string
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * create_xarray - creates an array of characters
 * array is initialized with character x
 * @size: size of array to be initialized
 *
 * Return: pointer to the array
 */
char *create_xarray(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for i = 0; i < (size - 1); i++)
		array[i] = 'x';
	array[i] = '\0';

	return (array);
}

/**
 * iterate_zeroes - iterates through a string of numbers containing
 * leading zeroes until it hits a non-zero number
 * @str: A pointer to the next non-zero element
 *
 * Return: pointer to th non-zero element
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - conversa a digital char to equivalent int
 * @c: char to be converted
 *
 * Return: the int
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || gigit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - product of a string of numbers and a single digit
 * @prod: buffer to store the result
 * @mult: sring of numbers
 * @digit: single digit
 * @zeroes: number of leading zeroes
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num;

	int tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - adds the numbers stored in two strings
 * @final_prod: buffer storing the final product
 * @next_prod: next product to be added
 * @next_len: the length of next_prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argv: number of arguments passed to the program
 * @argc: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(arg[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}


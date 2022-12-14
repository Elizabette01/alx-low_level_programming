/**
 * main - print the string in the print function
 * Description - Using the main function
 * this program prints the size of various types on the computer
 * it has been compiled and run on
 * Return: Nothing
 */
#include <stdio.h>
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

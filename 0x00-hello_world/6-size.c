#include <stdio.h>

/**
 * main - print the string in put function
 *
 * description: using the main function
 * the program prints the statement
 * Return: 0 if exited properly,non-zero otherwise
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}

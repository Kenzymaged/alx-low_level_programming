#include <stdio.h>

/**
 * main - print the string in put function
 *
 * description: using the main function
 * the program prints the statement
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	fprintf( stderr, "my %s has %d chars\n", "string format", 30);
	return (0);
}

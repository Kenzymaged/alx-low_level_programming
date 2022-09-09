nclude < stdio.h >

/**
 * main - print the string in put function
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

	printf("size of char %ld byte(s)\n", sizeof(c));
	printf("size of int %ld byte(s)\n", sizeof(i));
	printf("size of long %ld byte(s)\n", sizeof(li));
	printf("size of long long %ld byte(s)", sizeof(lli));
	printf("size of float %ld byte(s)", sizeof(f));
	return (0);
}

#include <stdio.h>

/**
 * main - Prints the size of var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a; 1 byte(s)
	int b; 4 byte(s)
	long int c; 8 byte(s)
	long long int d; 8 byte(s)
	float e; 4 byte(s)



	printf("Size of a char: 1 byte(s)\n", sizeof(a));
	printf("Size of an int: 4 byte(s)\n", sizeof(b));
	printf("Size of a long int: 8 byte(s)\n", sizeof(c));
	printf("Size of a long long int: 8 byte(s)\n", sizeof(d));
	printf("Size of a float: 4 byte(s)\n", sizeof(e));
	return (0);
}

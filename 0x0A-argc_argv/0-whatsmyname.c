#include <stdio.h>
#include "main.h"
/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}


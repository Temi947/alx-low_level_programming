#include "main.h"

/**
 * main - that cause infinite loops
 * Return: 0
 */

int main(void)
{
	int i;

	 printf("Infinite loop incoming :(\n");

	 i = 0;

	 while (1 < 10)
	 {
		 putchar(i);
	 }

	 printf("Infinite loop avoided! \\o/\n");

	 return (0);
}
	

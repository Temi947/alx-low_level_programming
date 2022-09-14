#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: always success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
		
	}
	_putchar('\n');

}

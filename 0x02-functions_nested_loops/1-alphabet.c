#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0.
 */
void print_alphabet(void)
{
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;

	}
	_putchar('\n');

}

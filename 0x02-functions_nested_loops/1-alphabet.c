#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
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


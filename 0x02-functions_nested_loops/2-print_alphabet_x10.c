#include "main.h"

/**
 * print_alphabet_x10 - print list of alphabets 10 times
 * 
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int d = 0;

	while (d < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
			d++;
	}
}

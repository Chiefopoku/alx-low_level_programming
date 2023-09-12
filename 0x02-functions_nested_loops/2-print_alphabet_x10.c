#include "main.h"

/**
 * print_alphabet_x10 - function to print lower case alphabets 10X
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	char m;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
		{
			_putchar(m);
		}
	_putchar('\n');
}

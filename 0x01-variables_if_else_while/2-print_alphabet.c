#include <stdio.h>
/**
 * main - A program that prints alphabets from A to Z
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	return (0);
}

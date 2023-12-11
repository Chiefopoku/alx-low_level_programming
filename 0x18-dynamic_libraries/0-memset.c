#include "main.h"

/**
 * _memset - function that fills a lock of memory with a specific value
 * @a: the starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: a
 */

char *_memset(char *a, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		a[i] = b;
		n--;
	}
	return (a);
}

#include "main.h"

/**
 * _isupper - function that checks for lowercase character
 * @c: The character to be checked
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

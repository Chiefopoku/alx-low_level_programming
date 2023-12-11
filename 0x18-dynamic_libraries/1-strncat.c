#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from worth
 * @mode: input value
 * @worth: input value
 * @n: input value
 *
 * Return: mode
 */
char *_strncat(char *mode, char *worth, int n)
{
	int i;
	int j;

	i = 0;
	while (mode[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && worth[j] != '\0')
	{
	mode[i] = worth[j];
	i++;
	j++;
	}
	mode[i] = '\0';
	return (mode);
}

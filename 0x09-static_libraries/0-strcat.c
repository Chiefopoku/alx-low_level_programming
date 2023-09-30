#include "main.h"
/**
 * _strcat - concatenates two strings
 * @mode: input value
 * @worth: input value
 *
 * Return: mode
 */
char *_strcat(char *mode, char *worth)
{
	int i;
	int j;

	i = 0;
	while (mode[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (worth[j] != '\0')
	{
		mode[i] = worth[j];
		i++;
		j++;
	}

	mode[i] = '\0';
	return (mode);
}

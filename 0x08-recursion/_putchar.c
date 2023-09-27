#include <unistd.h>

/**
 * My _putchar.c 
 */

int _putchar(char c)
{
	return write(STDOUT_FILEN0, &c, 1);
}

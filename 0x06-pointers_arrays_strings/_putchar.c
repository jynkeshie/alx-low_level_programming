#include <unistd.h>

/**
 * _putchar - Writes a character
 * @c: The character to be written.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

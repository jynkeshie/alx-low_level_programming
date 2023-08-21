#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

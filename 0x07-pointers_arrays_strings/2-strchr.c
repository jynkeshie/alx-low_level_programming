#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to locate
 * Return: A pointer to the first occurrence of character c in string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
			{
			if (s[i] == c)
					return (s + i);
			}
			return (NULL);
}

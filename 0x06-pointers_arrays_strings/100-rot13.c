#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *org = s;
	char *from = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *to = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		char *f = from;
		char *t = to;

		while (*f)
		{
			if (*f == *s)
			{
				*s = *t;
				break;
			}
			f++;
			t++;
		}
		s++;
	}
	return (org);
}

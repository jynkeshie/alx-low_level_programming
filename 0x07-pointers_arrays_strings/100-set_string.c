#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer char
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}

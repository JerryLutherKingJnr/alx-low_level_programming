#include "main.h"

/**
 * string_toupper - changes lower case letters of a string to uppper case
 * @s: pointer to char parameters
 *
 * Return: *s
 */

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[i] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
	}
	return (s);
}

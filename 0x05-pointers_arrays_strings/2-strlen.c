#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer to an int that would be updated
 *
 *
 * Return: void meaning that we arrived at a correct answer
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
return (u);
}

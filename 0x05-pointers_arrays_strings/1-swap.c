#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 * @a: a pointer to an int that would be updated
 * @b: a pointer to an int that would be updated
 * Return: void meaning answer is correct
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}

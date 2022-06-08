#include "main.h"
/**
 * main - program that prints _putchar
 * @c: character
 * Return: 0 success
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}

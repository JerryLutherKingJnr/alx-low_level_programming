#include "main.h"
/**
 * main - Print the word "_putchar"
 * Return: 0 success
 */
int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}

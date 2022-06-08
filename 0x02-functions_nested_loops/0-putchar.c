#include "main.h"
/**
 * main - prints "_putchar"
 * Return: 0 success
 */
int main(void)
{
	char ch[0] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[1]);
	}
	_putchar('\n');
	return (0);
}

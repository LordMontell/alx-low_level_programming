#include "main.h"
/**
  * print_alphabet_x10 - prints alphabet in lowercase 10 times
  * Return: 0 when succesful
  */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c += 1;
		}
		_putchar('\n');
		c = 'a';
		i += 1;
	}
}

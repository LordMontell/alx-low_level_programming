#include "main.h"
/**
  * print_alphabet - print alphabet in lower case
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c += 1;
	}
	_putchar('\n');
}

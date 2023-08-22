#include "main.h"
/**
  * print_rev -print string in reverse
  * @s: receives a copy of string
  * Return: nothing
  */

void print_rev(char *s)
{
	int i;
	int strl = (int) strlen(s);

	for (i = strl - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

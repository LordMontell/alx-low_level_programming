#include "main.h"
/**
  * print_line - print a line
  * @n: receive a copy of a integer digit
  * Return: nothing
  */

void print_line(int n)
{
	int num = 0;

	if (n > 0)
	{
		while (num < n)
		{
			_putchar('_');
			num += 1;
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"
/**
  * puts_half - print half the string
  * @str: receives a copy of an address
  * Return: nothing
  */

void puts_half(char *str)
{
	int length = strlen(str);
	int n = ((length - 1)) / 2;
	int half_length = length / 2;
	int i;

	for (i = half_length; i < length; i++)
	{
		if (length % 2 != 0)
		{
			_putchar(str[n]);
		}
		else
		{
			_putchar(str[i]);
		}
	}

		_putchar('\n');
}

#include "main.h"
/**
  * puts2 - print every other chararcter in a string
  * @str: receives a copy of a string
  * Return: nothing
  */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

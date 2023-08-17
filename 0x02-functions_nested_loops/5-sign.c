#include "main.h"
/**
  * print_sign - print sign of a number
  * @n: Return 1 when when positive,0 when number is 0, -1 otherwise
  * Return: 0 when succesful
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

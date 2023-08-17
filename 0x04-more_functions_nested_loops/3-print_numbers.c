#include "main.h"
/**
  * print_numbers - print digit from 0-9,using putchar
  * Return: nothing
  */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num += 1;
	}
	_putchar('\n');
}

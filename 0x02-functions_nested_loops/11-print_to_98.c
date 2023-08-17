#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - prints all natural numbers from n to 98, followed by
  * @n: receives a copy natural number
  * Return: natural number up to 98
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n != 99)
		{
			printf("%d, ", n);
			n += 1;
		}
		putchar('\n');
	}
	else
	{
		while (n != 99)
		{
			printf("%d, ", n);
			n -= 1;
		}
		_putchar('\n');
	}
}

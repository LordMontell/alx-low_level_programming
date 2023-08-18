#include "main.h"
/**
  * print_square - print square
  * @size: Receive the siz of the square as an integer
  * Return: boid
  */

void print_square(int size)
{
	int j = 0;
	int i = 0;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

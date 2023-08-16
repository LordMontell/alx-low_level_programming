#include "main.h"
/**
  * main - call a print_alphabet() function
  * Return: 0 when succesful
  */

int main(void)
{
	print_alphabet();
	return (0);
}

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

#include <stdio.h>
#include <main.h>
/**
  * main - call a function
  */

void print_alphabet(void);

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
		putchar(c);
		c += 1;
	}
}

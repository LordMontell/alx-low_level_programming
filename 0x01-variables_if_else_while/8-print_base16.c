#include <stdio.h>
/**
  * main - print base 16 numbers in lower case
  * Return: 0 when succesful
  */

int main(void)
{
	int num = 0;
	char c = 'a';

	while (num <= 9)
	{
		putchar('0' + num);
		num += 1;
	}

	while (c <= 'f')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}

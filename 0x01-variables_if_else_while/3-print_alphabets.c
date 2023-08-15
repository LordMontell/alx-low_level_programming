#include <stdio.h>
/**
  * main - prints alphabets in lowercase and uppercase
  * Return: 0 when succesful
  */

int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b += 1;
	}
	putchar('\n');
	return (0);
}

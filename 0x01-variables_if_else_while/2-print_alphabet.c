#include <stdio.h>
/**
  * main - prints alphabets in lowercase
  * Return: 0 when succesful
  */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c += 1;
	}
	return (0);
}

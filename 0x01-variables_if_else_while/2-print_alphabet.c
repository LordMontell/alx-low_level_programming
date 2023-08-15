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
		c += 1;
	}
	putchar('\n');
	return (0);
}

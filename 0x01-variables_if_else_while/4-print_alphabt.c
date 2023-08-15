#include <stdio.h>
/**
  * main - prints alphabets in lowercase except q and e
  * Return: 0 when succesful
  */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e')
		{
			c += 1;
		}
		else if (c == 'q')
		{
			c += 1;
		}
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}

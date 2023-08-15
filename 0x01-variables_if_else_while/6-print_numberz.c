#include <stdio.h>
/**
  * main - print single digits of base ten starting from 0, with printchar
  * Return: 0 when succesful
  */

int main(void)
{
	int n = 0;
	while (n <= 9)
	{
		putchar('0' + n);
		n += 1;
	}
	putchar('\n');
	return (0);
}

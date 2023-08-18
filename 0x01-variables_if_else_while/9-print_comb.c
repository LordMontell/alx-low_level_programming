#include <stdio.h>
/**
  * main - prints combination of 0-9
  * Return: 0 when succesful
  */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num += 1;
	}
	putchar('\n');
	return (0);
}

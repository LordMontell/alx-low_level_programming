#include <stdio.h>
/**
  * main - prints combination of 0-9
  * Return: 0 when succesful
  */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num <= 56)
		{
			putchar(',');
			putchar(' ');
		}
			num += 1;
	}
	putchar('\n');
	return (0);
}

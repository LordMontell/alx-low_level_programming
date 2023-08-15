#include <stdio.h>
/**
  * main - prints all single digits number of base 10
  * Return: 0 when succesful
  */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n += 1;
	}

	putchar('\n');
	return (0);
}



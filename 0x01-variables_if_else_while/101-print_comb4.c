#include <stdio.h>
/**
  * main -print combinaon of numbers
  */

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	while (num1 <= 9)
	{
		putchar('0' + num1);
		num1 += 1;
		++num2;
		putchar('0' + num2);
		++num3;
		putchar('0' + num3);

	}
	putchar('\n');
}

#include "main.h"
/**
  * main - call fizzbuzz program
  * Return: 0 when succesful
  */

int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("%s ", "Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("%s ", "Fizz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
  * factorial - return a factorial of a number
  * @n: receives a digit
  * Return: a factorial of a digit n
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

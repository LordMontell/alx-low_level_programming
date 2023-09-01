#include "main.h"
/**
  * _pow_recursion - returns a value of x to the power of y
  * @x: receives an integer digit 
  * @y: receives an integer digit
  * @Return: x to the power y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y -1));
}

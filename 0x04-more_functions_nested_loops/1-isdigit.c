#include "main.h"
#include <ctype.h>
/**
  * _isdigit - checks if a character is a digit or not
  * @c: receive a copy of a character
  * Return: 1 when is a digit, 0 otherwise
  */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

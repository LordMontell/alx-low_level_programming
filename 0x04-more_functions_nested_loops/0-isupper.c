#include "main.h"
#include <ctype.h>
/**
  * _isupper - print only uppercase alphabets,a-z
  * @c:  Receives a copy of integer type
  * Return: 1 when c is uppercase or 0 otherwise
  */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

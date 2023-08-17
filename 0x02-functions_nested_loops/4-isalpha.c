#include "main.h"
#include <ctype.h>
/**
  * _isalpha - check if a character is an alphabet
  * @c: receives a copy of a character
  * Return: 1 when is an alphabet or 0 otherwise
  */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
#include <ctype.h>
/**
  * _islower - check if acharacter is lowercase
  * @c: receive the copy of a character
  * Return: 1 when is lowercase or 0 otherwise
  */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

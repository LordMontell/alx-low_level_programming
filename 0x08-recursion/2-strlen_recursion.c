#include "main.h"
/**
  * _strlen_recursion - return a length of a string using recursion
  * @s: receives a copy of a string
  * Return: the length of a string
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}


#include "main.h"
/**
  * string_toupper - converts lowercase letters to uppercase letters
  * Return: char
  * @c: receives a copy of a string
  */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; i < (int) strlen(c); i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}
	return (c);
}

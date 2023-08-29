#include "main.h"
/**
  * _memset - function fills the first n bytes of the memory
  *		area pointed to by s with the constant byte b
  * @s: receives address to be filled
  * @b: receives constant byte to be filled in the memmory
  * @n: number of bytes to be filled
  * Return: a pointer of the filled address are
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n - 1; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}

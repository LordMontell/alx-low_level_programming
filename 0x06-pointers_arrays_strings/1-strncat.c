#include "main.h"
/**
  * _strncat -concatenates strings using strncat
  * @src: Receives an address of a source string
  * @dest: Receives an address of a destination string
  * @n: n bytes from src
  * Return: a pointer to char
  */

char *_strncat(char *dest, char *src, int n)
{
	char *p;

	p = strncat(dest, src, n);
	return (p);
}

#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: Receives an address of a destination string
  * @src: Receives an address of a source string
  * Return: concatenated string
  */

char *_strcat(char *src, char *dest)
{
	char *p;
	p = strcat(dest, src);
	return (p);
}

#include "main.h"
/**
  * _strncpy - copies a string copied pointed by src
  * @dest: receives an address of dest
  * @src: receives an address of src
  * @n: receives number of n bytes to be copied
  * Return: char pointer
  */

char *_strncpy(char *dest, char *src, int n)
{
	char *p;

	p = strncpy(dest, src, n);
	return (p);
}

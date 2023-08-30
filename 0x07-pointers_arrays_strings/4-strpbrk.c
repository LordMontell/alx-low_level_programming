#include "main.h"
/**
  * _strpbrk - Write a function that searches a string for
  * any of a set of bytes.
  * @s: receives an addres
  * @accept: receives an address
  * Return: Returns a pointer to the byte in s that matches one of the bytes in
  * accept, or NULL if no such byte is found
  * or NULL if the substring is not found.
  */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

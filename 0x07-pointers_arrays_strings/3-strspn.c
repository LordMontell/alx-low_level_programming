#include "main.h"
/**
  * _strspn - Write a function that gets the length of a prefix substring
  * @s: receives the source string
  * @accept: receives prefix substring
  * Return: Returns the number of bytes in the initial segment of s which
  * consist only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

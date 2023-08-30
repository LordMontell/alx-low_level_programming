#include "main.h"
/**
  * _strstr - Write a function that searches a string for
  * any of a set of bytes.
  * @haystack: receives an addres
  * @needle: receives an address
  * Return: Returns a pointer to the beginning of the located substring,
  * or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	return (strpbrk(haystack, needle));
}

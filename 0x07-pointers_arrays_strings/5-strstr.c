#include "main.h"

/**
  * _strstr -  a function that locates a substring
  * @haystack: will describe later
  * @needle: will describe later
  * Return: Returns a pointer to the beginning of the located
  * substring, or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

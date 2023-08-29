#include "main.h"
/**
  * _strchr - Returns a pointer to the first occurrence of the character c
  * in the string s, or NULL if the character is not found
  * @s: pointer to a string
  * @c: character to find
  * Return: a pointer to the first occurrence in the string otherwise NuLL
  */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

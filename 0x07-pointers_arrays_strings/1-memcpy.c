#include "main.h"
/**
  * _memcpy - function copies n bytes from memory area src to memory area dest
  * @dest: destination where n bytes is copied to
  * @src: the source where n bytes is copied from
  * @n: number of bytes to be copied
  * Return: a pointer to destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

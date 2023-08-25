#include "main.h"
/**
  * reverse_array - reverse a string
  * @a: receives a copy of address of a string
  * @n: receives the number of elements in an array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}

}

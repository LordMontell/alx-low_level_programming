#include "main.h"
/**
  * print_array - print array elements
  * @a: receives a copy of an array
  * @n: receives number of elements to count
  * Return: nothing
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}

	}
	printf("\n");
}

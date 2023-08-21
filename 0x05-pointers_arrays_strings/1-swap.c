#include "main.h"
/**
  * swap_int - swap a with b
  * @a: receives a copy of adress of an int type
  * @b: receives a copy of address of int type
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

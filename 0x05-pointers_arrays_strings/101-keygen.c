#include "main.h"
/**
  * main - generate random number
  * Return: nothing
  */

int main(void)
{
	srand(time(NULL));
	return (printf("%d\n", rand()));
}

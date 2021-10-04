#include <stdio.h>
#include "main.h"
/**
  *print_to_98 - prints natural nubers from 0 to 98
  *@: number
  *
  *Return: natural numbers
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}

#include "main.h"
#include <stdio.h>
/**
  *swap_int - swap value between two integers
  *@a: integer
  *@b: integer
  *
  *Return: none
  */
void swap_int(int *a, int *b)
{
	int d = *a;

	*a = *b;
	*b = d;
}

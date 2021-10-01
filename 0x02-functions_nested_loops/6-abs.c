#include "main.h"
/**
  *_abs - prints the absolute value
  *@n: number
  *
  *Return: n
  */
int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	} else if (n < 0)
	{
		n = n - (n + n);
	}
	else
	{
		n = 0;
	}
	return (n);
}

#include "main.h"
/**
  *print_sign - prints the sign of a number
  *@n: number input
  *
  *Return: 1 if greter than 0, 0 if zero and -1 if less than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

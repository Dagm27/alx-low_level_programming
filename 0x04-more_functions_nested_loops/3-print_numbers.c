#include "main.h"

/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

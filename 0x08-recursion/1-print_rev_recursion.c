#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	else if (s[1] != 0)
	{
		_print_rev_recursion(&*(s + 1));
		_putchar (*(s));
	}
	else
	{
		_putchar (*s);
	}
}

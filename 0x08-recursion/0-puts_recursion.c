#include "main.h"
/**
 * _puts_recursion - prints string
 * @a: is a pointer variable
 * Return: void
 */

void _puts_recursion(char *a)
{
	if (*(a) == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*a);
	_puts_recursion(&*(a + 1));
}

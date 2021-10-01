#include "main.h"
/**
  *print_alphabet_x10 - prints alphabet 10x
  *
  */
void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

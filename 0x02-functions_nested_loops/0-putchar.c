#include <stdio.h>
#include "main.h"
/**
  *main - prints _putchar
  *
  *Return: always 0
  */
int main(void)
{
	char c[] = "_putchar";
	int a;

	for (a = 0; a < 9; a++)
	{
		putchar(c[a]);

	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints numbers
  *@a - number
  *
  *Return: always 0
  */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar(10);
	return (0);
}

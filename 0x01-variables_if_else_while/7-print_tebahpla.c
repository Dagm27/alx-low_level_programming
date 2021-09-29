#include <stdio.h>
/**
  *main - prints alphabet backward
  *
  *Return: always 0
  */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}

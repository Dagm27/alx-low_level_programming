#include <stdio.h>
/**
  * main - prints alphabet
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar(10);
	return (0);
}

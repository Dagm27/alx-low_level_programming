#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints alphabet lower case
  *@ch - alphabet
  *
  *Return: always 0 (success)
  */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar(10);
	return (0);
}

#include <stdio.h>
/**
  *main - print numbers
  *
  *Return: always 0
  */
int main(void)
{
	int a;

	a = 0;
	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");
	return (0);
}

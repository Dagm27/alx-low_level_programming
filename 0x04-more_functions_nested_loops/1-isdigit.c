#include "main.h"
/**
  *_isdigit - check for digit
  *@x: the number to be checked
  *
  *return: 1 or a character that will be a digit or 0 for any else
  */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
return (0);
}

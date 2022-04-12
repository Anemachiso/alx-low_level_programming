#include "main.h"

/**
  * -abs - check main.
  * @r: An input character
  * Description: Function return absolute value of a number
  * Return:  return absolute value of a number
  */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}

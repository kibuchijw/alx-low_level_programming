#include "main.h"

/**
  * _abs - Compute absolute value of an integer
  * @c: Number to be computed
  * Return:  Absoute value of the number or zero
  */

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

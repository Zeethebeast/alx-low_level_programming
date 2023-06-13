#include "main.h"

/**
 *  _pow_recursion -  function that returns the value of  power of a number
 *  @x: value to be raised
 *  @y: power
 *  Return: y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

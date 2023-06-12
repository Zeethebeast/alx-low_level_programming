#include "main.h"

/**
 * _puts__recursion - function that prints a string recusively
 * @s: input
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)/*base case*/
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{	_putchar('\n');
	}
}

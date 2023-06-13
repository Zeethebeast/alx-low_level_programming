#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s: The string to be printed
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	/*base that stops the function after gets to the last string*/

	{
		_print_rev_recursion(s + 1);/*recursion*/
	_putchar(*s);/*prints the string in reverse*/
	}
}

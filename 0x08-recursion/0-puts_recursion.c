#include "main.h"

/**
 * _puts__recursion - function that prints a string recusively
 * @s: input
 * Return: always 0 
 */

void _puts_recursion(char *s)
{
		if(*s == '\0')/*base case*/
	{
	_putchar(*s);/*prints current character*/
	_puts_recursion(s+1);/*call function with next character in the string*/
	}
	else 
		_putchar('\n');
}

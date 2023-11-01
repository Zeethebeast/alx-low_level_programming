/**
 * main - prints a new name without compiling
 * @argc: Argument count
 * @argv: Argument vector
 * Return: returns 0
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

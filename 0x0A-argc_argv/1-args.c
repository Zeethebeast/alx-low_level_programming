/**
 * main - prints number of arguments when passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */


#include <stdio.h>


int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}


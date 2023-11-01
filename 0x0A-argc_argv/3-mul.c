/**
 * main - prints multiplication of two numbers
 * @argc: the argument counts
 * @argv: argument vector
 * Return: 0
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	mul = n1 * n2;

	printf("%d\n", mul);
	return (0);
}

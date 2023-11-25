#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -converts a binary to an unsigned int
 *@b: string values
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;
	
	if (b == NULL)
	return (0);

	for (;b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
		return (0);
		}

		if (b[i] == '1')
		{
		decimal = decimal << 1 | 1;
		}
		else
		if (b[i] == '0')
		{
		decimal = decimal << 1;
		}
	}
	return (decimal);
}

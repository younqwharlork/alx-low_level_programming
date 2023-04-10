#include <stdio.h>
#include "main.h"

/**
 * Binary_to_unit - Write a function that converts binary number.
 * @b: string containing the binary number.
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b);
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;
	const char *p = b;

	while (*p != '\0')
	{
		if (*p != '0' && *p != '1')
	{
		return (0);
	}
	p++;
	}

	p = b;
	while (*p != '\0')
	{
		result = result * 2 + (*p - '0');
	p++;
	}

	return (result);
}

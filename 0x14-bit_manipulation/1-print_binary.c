/*
 * Auth: Onawole abayomi robert
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * print_binary - prints the binary equivalent of decimal number in this file
 * @n: number to print in binary
 *
 */
void print_binary(unsigned long int n)
{
	int p, count = 0;
	unsigned long int current;

	for (p = 63; p >= 0; p--)
	{
		current = n >> p;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

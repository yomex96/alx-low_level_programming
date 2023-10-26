/*
 * File: 2-get_bit.c
 * Auth: onawole abayomi
 */
#include "main.h"

/**
 * get_bit - returns the value of  bit at an index in decimal number in file
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vals;

	if (index > 63)
		return (-1);

	bit_vals = (n >> index) & 1;

	return (bit_vals);
}

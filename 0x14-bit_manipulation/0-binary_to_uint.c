#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int for this
 * @b: string containing the binary number
 * Return: converted a number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[p] - '0');
	}

	return (dec_val);
}

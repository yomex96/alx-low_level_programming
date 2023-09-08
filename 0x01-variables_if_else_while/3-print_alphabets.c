#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
                        putchar(Lower);
                        Lower++;
	}
	while (Upper <= 'Z')
	{
			putchar(Upper);
			Upper++;
	}
	putchar('\n');
	return (0);
}

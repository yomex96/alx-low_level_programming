#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int numbers = ‘0’;

	while (numbers <= '9')
	{
                putchar(numbers);
                if (numbers <= ‘8')
               {
		       putchar(‘,’);
		       putchar(‘ ’);  
                }
                numbers++;
        }
        putchar('\n');
        return (0);
}

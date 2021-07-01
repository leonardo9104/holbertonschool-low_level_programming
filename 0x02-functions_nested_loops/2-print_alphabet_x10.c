#include "holberton.h"

/**
* print_alphabet_x10- check the code for Holberton School students
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char n;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
* print_alphabet- check the code for Holberton School students
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

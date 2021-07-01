#include "holberton.h"

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char n[10] = "Holberton";
	int j = 0;

	while (j <= 9)
	{
		_putchar(n[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}

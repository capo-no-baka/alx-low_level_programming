#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char var;
	int i;

	i = 0;

	while (i < 10)
	{
		var = 'a';
		while (var <= 'z')
		{
			_putchar(var);
			var++;
		}
		_putchar('\n');
		i++;
	}
}

#include "main.h"
/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

int main(void)
{
int counter = 0;
char v[] = "_putchar";

for (; counter < 8; counter++)
	_putchar(v[counter]);
_putchar('\n');
return (0);
}

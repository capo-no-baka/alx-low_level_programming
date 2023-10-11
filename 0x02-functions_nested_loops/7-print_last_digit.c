#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @v: the integer to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int v)
{
    int a;

    a = v % 10;
    if (a < 0)
        a = -a;

    _putchar(a + '0');

    return a;
}

#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the number to check its sign
 *
 * Return: 1 if n is greater than zero,
 * 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (1);
}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/*
 * File: 8-print_base16.c
 * Auth: Lwazi Shangase
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		putchar(num % 16 < 10 ? num % 16 + '0' : num % 16 - 10 + 'a');
	}

	putchar('\n');

	return (0);
}

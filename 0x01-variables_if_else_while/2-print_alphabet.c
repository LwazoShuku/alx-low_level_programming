/*
 * File: 2-print_alphabet.c
 * Auth: Lwazi Shangase
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * 		followed by a line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

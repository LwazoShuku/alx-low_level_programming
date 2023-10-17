/*
 * File: 6-puts2.c
 * Auth: Lwazi Shangase
 */

#include <stdio.h>

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int index = 0, len = 0;
	int _putchar(char c);

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}

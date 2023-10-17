/*
 * File: 3-puts.c
 * Auth: Lwazi Shangase
 */

#include <stdio.h>

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str) {
    while (*str != '\0') {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}

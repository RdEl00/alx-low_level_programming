#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: 'A C program that prints exactly and
 *  that piece of art is useful\" - Dora Korpar, 2015-10-19,
 *  followed by a new line, to the standard error.'
 *
 * Return: Always 1 (stderr)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), strlen(str), stderr);
	return (1);
}

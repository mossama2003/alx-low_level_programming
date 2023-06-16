#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using write function
 *
 * Return: 1 (not success)
*/

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(text, stderr);
	return (1);
}


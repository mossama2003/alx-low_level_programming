#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of basel6 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	/*48: decimal rep of 0*/
	int digit = 48;
	/*120: decimal rep of f*/
	while (digit <= 120)
	{
		putchar(digit);
		if (digit == 57)
		{
			digit += 39;
		}
		digit++;
	}
	putchar('\n');

	return (0);
}

#include "main.h"

/**
 * _islower - checks fo lowercase character
 * @c: check input of function
 * Return: 1 if `c` is lowarcase
 *      otherwise always 0 (sucsses)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

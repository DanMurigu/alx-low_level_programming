#include "main.h"

/**
 * Main - Entry point
 * @c: a character argument
 *@ _is lower: -> checks if the character is lowercase
 * Return: returns 1 and 0 depending on condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

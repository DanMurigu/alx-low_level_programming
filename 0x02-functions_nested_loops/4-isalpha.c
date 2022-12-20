#include "main.h"

/**
 * Main - Entry point
 * Description: _isalpha = checks for alphabet letters
 * @c: a character to be checked 
 * Return: returns 0 or 1 deprnding on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

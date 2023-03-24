#include "main.h"

/**
 * _isupper - Check if c is upper
 *
 * c: it is an input for alphabet
 *
 * Return: 1 for upper letter. 0 if not
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}

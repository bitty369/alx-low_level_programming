#include "main.h"

/**
* _isdigit - Check if c is between 0 - 9
*
* @c: input
*
* Return: 1 for upper letter. 0 if not
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}

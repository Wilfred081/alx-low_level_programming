#include "main.h"

/**
* print_sign - function to check a sign of a number
* @n: is the int that will use for the arguument of the function
*
*Return: 0 or 1
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

#include "main.h"

/**
*main - Entry point
*Return: return 0.
*/

int main(void)
{
int a;

for (a = 1; a < 101; a++)
{
if((a % 3 == 0) && a % 5 == 0))
printf("FizzBzz");
else if(a % 5 == 0)
printf("Buzz");
else if (a % 3 == 0)
printf("Fizz");
else
printf("%d ", a);

if (a < 100)
printf(" ");
}

printf("\n");
return (0);
}

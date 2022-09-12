#include <stdio.h>

/**
* main - prints the alphabet except the letters q and e.
(*
* Return: 0 on success
*/
int main(void)

{
char letters[] = "abcdef";
int i;

for (i = 0; i < 24; i++)
{
putchar(letters[i]);
}
putchar('\n');

return (0);

}

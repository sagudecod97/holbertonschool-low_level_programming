#include <stdio.h>

/*
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int letter;

letter = 97;

while (letter < 123)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);

}

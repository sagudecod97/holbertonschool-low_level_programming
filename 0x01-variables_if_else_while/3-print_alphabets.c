#include <stdio.h>

/*
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int letters, letters2;

letters = 97;
letters2 = 65;

while (letters < 123)
{
putchar(letters);
letters++;
};
while (letters2 < 91)
{
putchar(letters2);
letters2++;
};
putchar('\n');
return (0);

}

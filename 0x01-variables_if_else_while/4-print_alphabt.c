#include <stdio.h>
/**
 * main - A program that prints the alphabet in,
 *lowercase but excludes e and q
 *Return: Always 0 Success
 */

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}

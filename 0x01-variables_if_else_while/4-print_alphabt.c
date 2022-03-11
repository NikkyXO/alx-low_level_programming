#include <stdio.h>
/**
 * main - A program that prints the alphabet in,
 *lowercase but excludes e and q
 *Return: Always 0 Success
 */

int main(void)
{
char lowerCase = 'a';

while (lowerCase <= 'z')
{
if (lowerCase != 'e' && lowerCase != 'q')
{
putchar(lowerCase);
}
lowerCase++;
}
putchar('/n');
return (0);
}

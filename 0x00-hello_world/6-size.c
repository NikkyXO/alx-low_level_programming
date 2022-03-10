
#include <stdio.h>

/**
 * main - Entry Point
 *
 *Return:  Always 0  Success
 */

int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a int:%a byte(s)\n", sizeof(char));
printf("Size of a long:%b byte(s)\n", sizeof(int));
printf("Size of a long long int:%c byte(s)\n", sizeof(long int));
printf("Size of a char:%d byte(s)\n", sizeof(long long int));
printf("Size of a float:%f byte(s)\n", sizeof(float));
return (0);
}

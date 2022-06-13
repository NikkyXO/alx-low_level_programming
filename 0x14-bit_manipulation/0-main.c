#include <stdio.h>


int main(void)
{
    

    unsigned long int  n;

    unsigned int index = 6;


     n = 10;

    // for (i = 63; i >= 0; i--)
    // {
    //     x = (n >> i) & 1;

    //     if (x == 1)
    //         on = 1;
    //     if (on == 1)
    //         printf("%lu at index %d\n", (n >> i), i);
    // }
    // if (n == 0)
    //     printf("%lu at index %d\n", (n >> i), i);

    if (index >= (sizeof(n) * 8))
        return (-1);

    printf("%lu at index %d\n", ((n >> index) & 1), index);

    return (0);
}

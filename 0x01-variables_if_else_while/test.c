#include <stdio.h>

int main(void)
{
    for (int x = 'A'; x <= 'Z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
    return 0;
}

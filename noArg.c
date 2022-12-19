#include <stdio.h>

int noArg(void){
    char ch;
    ch = getchar();
    while (ch != '\t')
    {
        putchar(ch);
        ch = getchar();
    }
    return 0;
}
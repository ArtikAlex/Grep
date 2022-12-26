#include <stdio.h>
int noArg(void){
    char ch;
    while ((ch = getchar()) != '#')
        ch = getchar();
    return 0;
}
#include "main.h"

int main(int argc, char *argv[])
{
    if (argc == 1 && argv[1] == 0) {
        printf("Использование: grep [ПАРАМЕТР]...ШАБЛОНЫ[ФАЙЛ]\n");
        printf("Запустите \"grep --help\" для получения "
               "более подробного описания.\n");
    } else if (argc == 2) {
        noArg();
    } else {
        struct flags = { 0 };
        int pars_flags(int argc, char *argv[]);
    }
   // printf("%s", argv[1]);
   // noArg();
    return 0;
}
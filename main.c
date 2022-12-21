#include "main.h"

int main(int argc, char *argv[])
{
    flags flag = {0};
    if (argv[1] == NULL) {
        printf("Использование: grep [ПАРАМЕТР]...ШАБЛОНЫ[ФАЙЛ]\n");
        printf("Запустите \"grep --help\" для получения "
               "более подробного описания.\n");
    /* } else if (getopt(argc, argv, "eivclnhsfo") != 1) {
        noArg(); */
    } else {
        pars_flags(&flag, argv);
    }
    return 0;
}
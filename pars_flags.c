#include "main.h"

void pars_flags(flags *flag, char *argv[]) {
    int rez = 0;
    int argc = 1;
    while ( (rez = getopt(argc, argv, "eivclnhsfo")) != -1){
        switch (rez) {
            case 'e': flag->e = 1; break;
            case 'i': flag->i = 1; break;
            case 'v': flag->v = 1; break;
            case 'c': flag->c = 1; break;
            case 'l': flag->l = 1; break;
            case 'n': flag->n = 1; break;
            case 'h': flag->h = 1; break;
            case 's': flag->s = 1; break;
            case 'f': flag->f = 1; break;
            case 'o': flag->o = 1; break;
            case '?': printf("Error found !\n"); break;
        }
    }
}


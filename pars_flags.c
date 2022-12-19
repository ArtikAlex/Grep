#include "main.h"

int getopt(int argc, char * const argv[],
           const char *optstring);
extern char *optarg;
extern int optind, opterr, optopt;

int pars_flags(int argc, char *argv[]) {
    int rez = 0;

    while ( (rez = getopt(argc, argv, "eivclnhsfo")) != -1){
        switch (rez) {
            case 'e': flags->e = 1; break;
            case 'i': flags->i = 1; break;
            case 'v': flags->v = 1; break;
            case 'c': flags->c = 1; break;
            case 'l': flags->l = 1; break;
            case 'n': flags->n = 1; break;
            case 'h': flags->h = 1; break;
            case 's': flags->s = 1; break;
            case 'f': flags->f = 1; break;
            case 'o': flags->o = 1; break;
            case '?': printf("Error found !\n"); break;
        }
    }
}
